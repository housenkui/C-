//
//  main.cpp
//  初始化列表
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
struct Person {
    int m_age;
    int m_height;
    Person():Person(0,0) {
        cout << "Person" << this << endl;
       // Person(0,0);//直接调用构造函数，会产生一个临时对象，传入一个临时的地址值给this指针
    }
    
    //初始化列表：m_age(age),m_height(height)
    //初始化的顺序，根据对象的内存布局确定，所以先初始化m_age,然后m_height
    Person(int age, int height) :m_age(age), m_height(height){
         cout << "Person(int age, int height)" << this << endl;
    }
//    Person(int age, int height) {
//        this->m_age = age;
//        this->m_height = height;
//    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}
