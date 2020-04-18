//
//  main.cpp
//  析构函数、命名空间、继承、成员访问权限、初始化列表
//
//  Created by 侯森魁 on 2020/4/17.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
struct Car {
    int m_price;
    Car(){
        cout <<"Car"<<endl;
    }
    ~Car(){
        cout <<"~Car" << endl;
    }
};
struct Person {
    int m_age;
    Car *m_Car;
    
    Person() {
        cout << "Person" <<endl;
        this->m_Car = new Car();
    }
    Person(int age) {
        this->m_age = age;
        cout << "Person(int age)" <<endl;
        this->m_Car = new Car();
    }
    
    //回收掉person内部的堆空间
    ~Person(){
        //析构函数(也叫析构器)，在对象销毁的时候自动调用,一般用于完成对象的清理工作
        //特点:函数名称以 ~开头，与类同名，无返回值(void都不能写),无参，不可以重载，有且只有一个析构函数
        cout << "~Person" << endl;
        delete this->m_Car;
    }
    //通过malloc分配的对象free的时候不会调用构造函数
    //构造函数、
};
void test() {
    Person *p = new Person();
    delete p;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
  
    test();
    return 0;
}
