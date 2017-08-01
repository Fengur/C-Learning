//
//  main.cpp
//  C++03.数据类型
//
//  Created by Fengur on 2017/8/1.
//  Copyright © 2017年 Fengur. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // byte & bit 1byte = 8bit
    // byte 字节 bit 位
    // 4G 100M bps 所有网络传输的单位 都是Bit bit per second
    // C 和 C++ 的数据类型差异就是 C++ 多了一个Bool
    // 注意这里的size of 会跟你的电脑是不是32位有关
    cout << "bool \t" << sizeof(bool) << endl;
    cout << "char \t" << sizeof(char) << endl;
    cout << "short \t" << sizeof(short) << endl;
    cout << "int \t" << sizeof(int) << endl;
    cout << "long \t" << sizeof(long) << endl;
    cout << "long long \t" << sizeof(long long) << endl;
    cout << "float \t" << sizeof(float) << endl;
    cout << "double \t" << sizeof(double) << endl;
    cout << "long double \t" << sizeof(long double) << endl;
    
    return 0;
}
