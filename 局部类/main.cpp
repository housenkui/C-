//
//  main.cpp
//  局部类
//
//  Created by 侯森魁 on 2020/4/19.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 在函数内部定义的类，属于局部类
 */
int g_age = 20;
void test() {
    int m_age = 10;
    static int s_age = 30;
    //局部类
    /*
     作用域仅限于所在函数的内部
     其所有的成员必须定义在类内部，不允许定义static成员变量
     成员函数不能直接访问函数的局部变量(static变量除外)
     */
    class Person {
        
    public:
        static void run(){
            g_age = 30;
            s_age = 40;
//            m_age = 20;
            cout << "run()" << endl;
        }
    };
    Person person;
    Person::run();
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    test();
    return 0;
}
