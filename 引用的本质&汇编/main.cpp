//
//  main.cpp
//  引用的本质&汇编
//
//  Created by 侯森魁 on 2020/4/14.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    /*
     寄存器分8字节寄存器、4字节寄存器
     
     mov dest,src
     将src的内容赋值给dest,类似于dest = src
     [地址值]
     中括号[]里面放的都是内存地址
     word是2个字节，dword是4字节(double word),qword是8字节(quad(4倍的意思) word)
     call 函数地址
     调用函数
     
     mov eax,[0x11141241] 取出地址中的内容给eax
     lea eax(4字节) ,[地址值] 将地址值给eax
     
     ret 函数返回指令
     
     xor op1,op2 将op1和op2异或的结果赋值给op1,类似于op1 = op1 ^ op2
     
     add op1,op2 类似于op1 = op1 + op2
     
     sub op1, op2 类似于op1  = op1 - op2
     
     inc op  自增，类似于op = op + 1
     
     dec op  自剪，类似于op = op - 1
     
     jmp 内存地址 跳转，类似于goto
     跳转到某个内存地址去执行代码
     j开头的一般都是跳转，大多数是带条件的跳转，一般跟test、cmp等指令配合使用
     
     
     jmp 0x2321213 无条件的跳转
     
     jn 0x221341412 有条件的跳转  jcc (jmp condition code)
     
     */
    /*
     一个变量的地址值是它所有字节中最小字节的地址值
     */
    /*
     引用的本质就是指针，只是编译器弱化了它的功能，所以引用就是弱化了的指针
     
     一个引用占用指针的大小
     */
    
    /*
     引用不能改的特点，从汇编怎么体现出来？
     答:从汇编看不出来，这个由C++的语言特性决定。
     */
    /*
     当常引用指向了不同的数据时，会产生临时变量
     */
    int a = 1;
    int b = 2;
    int c = a + b;
    
    
    
    return 0;
}
