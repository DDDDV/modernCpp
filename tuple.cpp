#include<tuple>
#include<iostream>

auto get_student(int i){
    if(i == 1){
        return std::make_tuple(1.1,'A', "张三");
    }
    if(i == 2){
        return std::make_tuple(2.2, 'B', "李四");
    }
    if(i == 3){
        return std::make_tuple(3.3, 'C', "王五");
    }
    return std::make_tuple(0.0, 'Z', "default");//如果只写0会推断错误
}

int main(){
    auto student = get_student(0);
    std::cout << "ID:0 " 
    << "GPA:" << std::get<0>(student) << " "
    << "成绩" << std::get<1>(student) << " "
    << "姓名" << std::get<2>(student) << std::endl;

    double gpa;
    char grade;
    std::string name;

    std::tie(gpa, grade, name) = get_student(1);
    std::cout << "ID : 1 "
    << "GPA:" << gpa << " "
    << "成绩:" << grade << " " << " "
    << "姓名:" << name << " " << std::endl;

    
}