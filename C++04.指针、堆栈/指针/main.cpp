//
//  main.cpp
//  指针
//
//  Created by Fengur on 2017/8/1.
//  Copyright © 2017年 Fengur. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // 制定一个指针的时候 必须要指定一个地址 要不会造成指针失控
    // 无论是用什么样的编译环境，初始化一个指针时，必须要赋初始值
    // 如果不 很有可能出现意外
    int i = 10;
    int *p = &i;
    
    cout << "*p = " << *p << ",p = " << p << ",&p = " << &p << endl;
    cout << "i = " << i << ",&i = " << &i <<endl;
    
    // 指针指向的地址，向后+ sizeof(int)
    p++;
    cout << "*p = " << *p << ",p = " << p << ",&p = " << &p << endl;
    
    // 指针指向的地址，向前+ sizeof(int)
    p--;
    cout << "*p = " << *p << ",p = " << p << ",&p = " << &p << endl;
    // 尽量不要在程序中 进行指针的递增递减 这种操作通常是在 数组，链表中操作的
    
    *p = 15;
    cout << "*p = " << *p << ",p = " << p << ",&p = " << &p << endl;
    
    double d = 12.5;
    // 在使用指针时，指针的类型和所指向变量的类型 必须保持一致 从而可以保证内存数据访问的安全
    // 开发语言的设计者，相信程序员能够管理好内存
    // int *p1 = &d;
    double *p1 = &d;
    cout << "*p1 = " << *p1 << ",p1 = " << p1 << ",&p1 = " << &p1 << endl;
    
    // 递增时候，就要增加 sizeof(double) = 8
    p1++;
    cout << "*p1 = " << *p1 << ",p1 = " << p1 << ",&p1 = " << &p1 << endl;
    
    // 使用指针 可以处理 “堆”中大量的数据
    
    // 栈 先进后出
    return 0;
}
