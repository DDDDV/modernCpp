#include<mutex>
#include<thread>
#include<iostream>

int i = 1;
/**
 * @brief lock_guard
 * 
 * @param change_i 
 */
void mutexTest(int change_i){
    static std::mutex mtx; //互斥量
    std::lock_guard<std::mutex> lock(mtx); //使用lock_guard保证了异常安全
    i = change_i;
    
}

int j = 1;
/**
 * @brief unique_lock
 * 
 * @return int 
 */
void mutexUnique(int change_j){
    std::mutex mtx;
    std::unique_lock<std::mutex> lock(mtx);//可以将锁粒度更细
    std::cout << j << std::endl;
    lock.unlock();
    std::cout << "unlock " << std::endl;
    
    lock.lock();
    j = change_j;
    lock.unlock();
}

int main(){
    std::thread t1(mutexTest, 2) , t2(mutexTest, 3);
    t1.join();
    t2.join();
    std::cout << i << std::endl;
    std::cout << std::endl;

    std::thread t3(mutexUnique, 2), t4(mutexUnique, 3);
    t3.join();
    t4.join();

    return 0;
}