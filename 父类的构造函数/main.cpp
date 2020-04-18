//
//  main.cpp
//  父类的构造函数
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Person {
    int m_age;
public:
    Person() {
        cout << "Person()" <<endl;
    }
    
    Person(int age) :m_age(age) {
        
        cout << "Person(int age)" <<endl;
    };
};


class Student:public Person {
    int m_score;
public:
    Student() {
        cout <<"Student()"<<endl;
    }
    Student(int age,int score) :m_score(score),Person(age) {
        cout <<"Student(int age,int score) " <<endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
