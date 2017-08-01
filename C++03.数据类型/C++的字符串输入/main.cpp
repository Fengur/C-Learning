//
//  main.cpp
//  C++的字符串输入
//
//  Created by Fengur on 2017/8/1.
//  Copyright © 2017年 Fengur. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char name[8];
    
    
    // 在C++中 不同的编译器运行的结果可能是不一样的
    // C++的标准是不断更新的,在Xcode5.1版本中，已经支持了C++14
    cout << "please input name";
    // cin >> name;
    cin.get(name,8);
    // 使用cin.get 在c++中是比较推荐的方式
    std::out << name << endl;
    return 0;
}
