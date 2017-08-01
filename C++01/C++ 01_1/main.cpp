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
    
void test(char *args[]) {
        char *dict[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };
        std::string buffer;
        buffer.append("13102");string
        char x[] = new char[3];
        x[0] = dict[10 >> 2 & 0xf];
        x[1] = dict[(60 >>> 2) - (10 ^ 9)];
        x[2] = dict[(139 | 193) % 5];
        buffer.insert(2, Integer.parseInt(String.valueOf(x), 16));
        for (int i = buffer.length(); i > 0; i--) {
            System.out.print(buffer.charAt(i - 1));
        }
    }
    
    
    return 0;
}
