//
//  main.cpp
//  虚继承
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
/*
 虚继承可以解决菱形继承带来的问题
 Person类被称为虚基类
 */
using namespace std;
class Person {
public:
    int m_age;
};
class Student:virtual public Person {
public:
    int m_score;
};
class Worker :virtual public Person {
public:
    int m_salary;
};
class Undergraduate:public Student,public Worker {
public:
    int m_grade;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
     cout << sizeof(int ) << endl;
     cout << sizeof(int *) << endl;
    
    cout << sizeof(Person) << endl;
    cout << sizeof(Worker) << endl;
    cout << sizeof(Student) << endl;

    cout << sizeof(Undergraduate) << endl;
    return 0;
}
