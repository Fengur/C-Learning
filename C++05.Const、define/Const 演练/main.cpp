//
//  main.cpp
//  Const 演练
//
//  Created by Fengur on 2017/8/2.
//  Copyright © 2017年 Fengur. All rights reserved.
//

#include <iostream>

#define AAA 10;

using namespace std;

// 使用const可以保证变量的安全 在其他函数使用过程中  变量内容不会修改
// int *const a => a的地址是常量，禁止修改其指向的地址
// const int *a => *a 的内容是常量 禁止修改*a的内容


// const 所在的位置 与类型 无关
// const int 和  int const  是一致的
// 在判断 const 固定的内容时，可以判断const 右边是什么

int sum ( const int *a, int *b){
    // a已经不允许修改了
    // *a = 80;
    return *a+*b;
}


// 下面的代码编译器会报一个错误 请问 那一句是错误的呢？
void constDemo1(){
    typedef char * pStr;
    char string[4] = "abc";
    const char *p1 = string;
    cout << "*p1=" << *p1 << ",p1 = " << p1 << endl;
    cout << "*p1=" << *p1 << ",p1 = " << p1 << endl;
    
      p1++;

    const pStr p2 = string;
    cout << "*p2=" << *p2 << ",p2 = " << p2 << endl;
    
    // pStr 等价于 char *const p2  p2的地址已经锁定 所以下面这一句会错
    //    p2++; 这一句会出问题
}



void constDemo2(){
    
}

int main(int argc, const char * argv[]) {

    const int x = 12;
    int a = x;
    int b = x;
    
    int c = sum(&a, &b);
    
    cout << "result " << c << ",a " << a << ",b " << b << endl;
    
    int i = 10;
    
    // 锁定内容
    const int *p = &i;
    // 锁定内容
    int const *p1 = &i;
    
    // 锁定地址
    int *const p3 = &i;
    
    // 内容和地址都锁定
    const int * const p2 = &i;
    
    
    const int j = 10;
    // 使用指针的目的 是通过间接的方式 修改变量
    // 如果定义了就一个常量  是不允许通过指针间接修改的
    // int *q = &j;
    
    // *p 可以读取j的内容 但是不能修改
    const int *q1 = &j;
    
    // 只锁定地址 是可以间接修改变量内容的 所以下面这句话是错的
    // int *const q2 = &j;
    
    constDemo1();
    return 0;
}
