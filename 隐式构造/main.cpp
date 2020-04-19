//
//  main.cpp
//  隐式构造
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 C++中存在隐式构造的现象：某些情况下，会隐式调用单参数的构造函数
 */
class Person {
    int m_age;
public:
    Person() {
        cout << "Person() - " << this << endl;
    }
    
     Person(int age):m_age(age) {
         cout << "Person(int) - " << this << endl;
    }
//    explicit Person(int age):m_age(age) {
//         cout << "Person(int) - " << this << endl;
//    }
    Person(const Person &person){
        cout << "Person(const Person &person)" << this << endl;
    }
    ~Person() {
         cout << "~Person() -" << this << endl;
    }
    void display(){
        cout << "display() - age is" << this->m_age << endl;
    }
};
void test1(Person person){
    
}

//Person test2() {
//    return 30;
//}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Person person = 10;
    return 0;
}
