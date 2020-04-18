//
//  main.cpp
//  cin&cout&函数重载
//
//  Created by 侯森魁 on 2020/4/12.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
/* C++/C混编，调用C的API需要告诉编译器按照C的方式去编译*/
#include "sum.h"
using namespace std;

/*
 函数重载采用了name mangling 或者叫name decoration技术对函数重新命名，C++的编译器会把
 display(int a)、变成display_int
 display(long a)、变成display_long
 display(double a)、变成display_double
 */
void display(int a) {
    cout << "display(int a)" << a << endl;
}
void display(long a) {
    cout << "display(int a)" << a << endl;
}
void display(double a) {
    cout << "display(int a)" << a << endl;
}

//C++的函数默认值必须从右边开始，如果有方法声明，默认参数必须写在方法声明上
void func (int a, int b = 10){
    
}

//C++函数指针

void test() {
    cout << "test()"  << endl;
}

void display(int a, void (*func)() = test) {
    cout << "a is " << a << endl;
    cout << "func is " << func << endl;
    func();
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!" << endl;
    cout << sum(20, 30) << endl;
    display(10,test);
    //C++函数指针
    void (*funcPtr)() = test;
    funcPtr();
    return 0;
}
