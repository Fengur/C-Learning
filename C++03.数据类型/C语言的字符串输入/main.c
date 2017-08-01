//
//  main.c
//  C语言的字符串输入
//
//  Created by Fengur on 2017/8/1.
//  Copyright © 2017年 Fengur. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char name[8];
    
    printf("please input name :");
    // scanf 的问题
    // 1. 不支持空格
    // 2. 不检查长度 不安全的
    // gets(name);
    // gets的问题 不检查长度 能够接收空格输入 但是是不安全的
    // scanf("%s",name);
    
    // fgets 参数 1.字符串数组 2.字符串的长度 3. 输入设备   应当使用这种方式
    // fgets(name, 8, stdin);
    
    // scanf 支持正则表达式
    scanf("%[^{8}\n]",name);
    printf("%s\n",name);
    return 0;
}
