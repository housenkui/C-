//
//  main.cpp
//  内联函数
//
//  Created by 侯森魁 on 2020/4/12.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return  a + b;
}
/*
 DIA 可以把windows系统下的可执行文件.exe，反编译成汇编，一目了然
 使用inline修饰函数的声明或者实现，可以使其变成内联函数
 建议声明和实现都增加inline修饰
 
 特点：
 编译器会将函数调用直接展开为函数体代码
 可以减少函数调用的开销，函数调用需要开辟栈空间，结束后又要回收栈空间
 会增大代码体积
 
 注意:
 尽量不要内联超过10行代码的函数
 有些函数即使声明为inline，也不一定会被编译器内联，比如递归函数
 
 内联的使用场景:
 函数的代码量不是很多
 函数的调用频率比较高
 相比较于宏定义多了语法检查
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    int c = sum(10, 20);
    cout << c << endl;
    return 0;
}
