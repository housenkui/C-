//
//  Person.cpp
//  命名空间
//
//  Created by 侯森魁 on 2020/4/17.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include "Person.hpp"
#include <iostream>
using namespace std;
//::是域运算符
Person::Person() {
    cout << "Person() " <<endl;
}
Person:: ~Person() {
    cout << "~Person()" <<endl;
}
void Person::setAge(int age) {
    this->m_age = age;
    cout << "Person::setAge(int age)" <<endl;
}
int Person::getAge() {
    cout << "int Person::getAge()" <<endl;
    return this->m_age;
}

