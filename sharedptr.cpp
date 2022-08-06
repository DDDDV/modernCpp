#include<memory>
#include<iostream>
/**
 * @brief std::shared_ptr 可以通过 get() 方法来获取原始指针，
 * 通过 reset() 来减少一个引用计数， 
 * 并通过use_count()来查看一个对象的引用计数
 * 
 * @return int 
 */
int main(){
    auto pointer = std::make_shared<int>(10);
    auto pointer2 = pointer;
    auto pointer3 = pointer;
    std::cout << "pointer.use_count() =" << pointer.use_count() << std::endl;
    std::cout << "pointer2.use_count() =" << pointer2.use_count() << std::endl;
    std::cout << "pointer3.use_count() =" << pointer3.use_count() << std::endl;

    pointer3.reset();
    std::cout << "pointer.use_count() =" << pointer.use_count() << std::endl;
    std::cout << "pointer2.use_count() =" << pointer2.use_count() << std::endl;

    auto pointer4 = pointer.get();
    std::cout << "pointer.use_count() =" << pointer.use_count() << std::endl;
    std::cout << "pointer2.use_count() =" << pointer2.use_count() << std::endl;
    //std::cout << "pointer4.use_count() =" << pointer4.use_count() << std::endl; //使用get()获取原始指针，不存在use_count()方法
    
    
}