#include <iostream>
#include <type_traits>
/**
 * @brief decltype()被称作类型说明符，作用是选择并返回操作数的数据类型
 * 工作原理：
 *  1.decltype+变量var
 *  2.decltype+表达式 expr
 *  3.decltype+函数名func_name
 * decltype并不会计算表达式的值，而只是分析它的类型
 * 即使是参数是函数名，也不会执行函数内容。因为函数也是一个表达式
 * 
 * std::is_same<T, int>::value 用来检查T是不是int类型的模板
 */
void foo(char *);
void foo(int);

int main(){
    if(std::is_same<decltype(NULL), decltype(0)>::value)
        std::cout << "NULL == 0" << std::endl;
    if(std::is_same<decltype(NULL), decltype((void*)0)>::value)
        std::cout << "NULL == (void*)0" << std::endl;
    if(std::is_same<decltype(NULL), std::nullptr_t>::value)
        std::cout << "NULL == nullptr" << std::endl;
    foo(0);
    foo(nullptr);
    return 0;
}

void foo(char *){
    std::cout << "foo(char *) is called" << std::endl;
}
void foo(int i){
    std::cout << "foo(int) is called" << std::endl;
}