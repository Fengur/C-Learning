//
//  main.cpp
//  02
//
//  Created by Fengur on 2017/7/21.
//  Copyright © 2017年 Fengur. All rights reserved.
//

#include <iostream>
// 命名空间的使用，标准输入输出库对程序开放了他的命名空间
// 就可以直接试用期中的类或者函数
using namespace std;

// 命名空间的作用
// 在OC中不支持命名空间，在开发时，对于大型项目通常会通过类前缀的方式区分不同的类
// 在c++中 如果项目庞大，很有可能出现变量重名的问题
// std::endl 实现了换行功能
// \n 在标准输入输出库中，有缓冲区概念  endl除了能换行 还会同时情况缓冲区 直接输出到输出设备上
// \n 只是放到缓冲区 并不一定直接输出到输出设备上
// 从程序效果上来说 \n性能好，但是可能出现输出不及时的情况

namespace ZhangSan {
    // 命名空间内 可以把整个类都包含在命名空间内
    // 定义变量，常量，类，函数
    int x = 0;
}

namespace Lisi pp {
    int x ;
}

int main(int argc, const char * argv[]) {
    int x = 10;
    ZhangSan::x = 9;
    Lisi::x = 8;
    // 有多行输出时候，代码应该如下
    cout << "1234"<<"\n";
    cout << "main x " << x << ",zhang x "<< ZhangSan::x<<",lisi x "<<Lisi::x<< "\n";
    cout << "Hello, World!"<<endl;
    return 0;
}
