//
//  main.cpp
//  类&面向对象1
//
//  Created by 侯森魁 on 2020/4/17.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 C++编程规范
 全局变量:g_
 成员变量:m_
 静态变量:s_
 常量:c_
 使用驼峰标示
 */
//struct的默认成员权限是public
struct Person {
  //成员变量
    int age;
    
    //成员函数
    void run() {  //函数代码不占用对象的空间，占用对象空间的只有成员变量
        cout << "run() - age is" << age << endl;
    }
    
};
//class的默认成员权限是private
class Student {
    int no;
    void study() {
        cout << "study() - no is" << no << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    //在栈空间分配了内存给person对象
    //这个peson对象的内存会自动释放
    Person person;
    person.age = 20;
    person.run();
    
    Person *pPerson = &person;
    pPerson->age = 30;
    pPerson->run();
    
    cout << sizeof(person) <<endl;
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}
