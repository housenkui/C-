//
//  main.cpp
//  同名成员变量
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Worker {
public:
    int m_age;
};

class Student {
public:
     int m_age;
};
class HSK :public Worker,public Student {
public:
     int m_age;

};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    HSK hsk;
    hsk.m_age = 10;
    hsk.Student::m_age = 20;
    hsk.Worker::m_age = 30;
    hsk.HSK::m_age = 40;
    
    cout << sizeof(HSK) << endl;
    cout << sizeof(int) << endl;
    return 0;
}
