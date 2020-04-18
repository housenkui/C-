//
//  main.cpp
//  子类父类同名
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Person {
public:
    static int ms_count;
};
int Person::ms_count = 0;
class Student:public Person {
public:
    static int ms_count;
};
int Student::ms_count = 0;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout << &Person::ms_count << endl;
    cout << &Student::ms_count << endl;
    //不是同一块内存
    return 0;
}
