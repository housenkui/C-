//
//  main.cpp
//  虚析构函数
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 构造函数:子类会先调用父类的构造函数，然后再调用自己的构造函数
 析构函数:子类会先调用自己的析构函数，然后再调用父类的析构函数
 */
/*
 含有虚函数的类，应该将析构函数声明为虚函数(虚析构函数)
 delete父类指针时，才会调用子类的析构函数，保证析构的完整性
 */
class Person {
public:
    virtual void run() {
        cout <<"Person run()" << endl;
    }
    virtual ~Person() {
        cout << "Person :: ~Person()" << endl;
    }
};
class Student:public Person {
public:
    void run(){
        cout << "Student run()" <<endl;
    }
    ~Student(){
        cout << "Student ~Student()" <<endl;
    }
};
int main(int argc, const char * argv[]) {
    
    Person *p1 = new Student();
    delete p1;
    return 0;
}
