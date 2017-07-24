//
//  main.cpp
//  C++01
//
//  Created by Fengur on 2017/7/21.
//  Copyright © 2017年 Fengur. All rights reserved.
//

// iostream c++ 标准输入输出流
// cout
// cin
// clog cerr

// :: 作用域操作符

/*
 输入设备 >>  变量 （读操作）
 输出设备 <<  信息 （写操作）
 
 **/
#include <iostream>
// 第一个程序 helloWorld
int main(int argc, const char * argv[]) {
    int age;
    char name[20];
    double height;
    
    std::cout << "输入年龄: ";
    std::cin >>age;
    
    std::cout << "输入姓名: ";
    std::cin >>name;
    
    std::cout << "输入身高: ";
    std::cin >>height;
    
    std::cout << "姓名: " << name << "，年龄: " << age <<",身高: " << height << "\n";
    std::cout << "Hello, World!\n";
    
    return 0;
}
