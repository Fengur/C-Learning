//
//  main.cpp
//  栈示例
//
//  Created by Fengur on 2017/8/1.
//  Copyright © 2017年 Fengur. All rights reserved.
//

#include <iostream>
// 在系统中，栈是一块连续的内存区域，其大小一般为1M、2M，也有512K，该数值是一个常数 由系统预先根据栈顶的地址和栈的最大容量分配
// 如果数据申请的内存空间超过栈空间 就会出现overflow 因此 栈中无法存储比较大的数据
// 内联函数的出现  也是为了降低在栈中的内存开销
// 由系统自动分配 速度快 程序员不能对其操作


// 从右向左进栈
int sum (int x, int y){
    int z = x + y;
    return z;
}

int main(int argc, const char * argv[]) {
    // 进栈顺序
    // a b c y x z
  
    
    // 出栈顺序
    // z x y c b a
    
    // 在栈中的所有变量，都可以通过变量名进行访问
    int a = 20;
    int b = 30;
    int c = sum(a, b);
    
    std::cout << " result: " << c << std::endl;
}
