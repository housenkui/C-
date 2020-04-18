//
//  main.cpp
//  菱形继承
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 菱形继承会带来的问题
 最底下的子类从基类继承的成员变量，冗余。重复
 */
class Person {
public:
    int m_age;
};
class Student:public Person {
public:
    int m_score;
};
class Worker :public Person {
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
    
    cout << sizeof(Undergraduate) << endl;
    
    Undergraduate ug;
    ug.m_salary = 10;
    ug.m_score = 20;
    ug.m_grade = 30;
    ug.Worker::m_age = 40;
    ug.Student::m_age = 40;
    
    return 0;
}
