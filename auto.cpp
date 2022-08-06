#include<iostream>
#include<vector>

void fun1(){
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    for(auto it= vec.begin(); it != vec.end(); ++it){
        std::cout << *it << std::endl; 
    }
}
int main(){
    fun1();

}