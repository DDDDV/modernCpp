/**
 * @file constexpr.cpp
 * @author your name (you@domain.com)
 * @brief constexpr是指值不会改变并且在编译过程就能得到结果的表达式，声明为constexpr的值
 * 一定是一个const变量，而且必须使用常量表达式初始化
 * @version 0.1
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main(){
    int i = 10;
    //constexpr int *b = &i; //illegal
    static int b = 10;
    constexpr int *c = &b;
    const int c = 10;
    //constexpr int *d = &c;
}