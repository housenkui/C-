//
//  main.cpp
//  默认参数
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Person {
    int m_age;
    int m_height;
    Person(int age = 0,int height = 0);//默认参数只能写在函数的声明中
};
//初始化列表只能写在函数的实现中
Person::Person(int age, int height) :m_age(age),m_height(height){};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
