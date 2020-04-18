//
//  main.cpp
//  公有继承&私有继承
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>

class Person {
    public:
    int m_age;
    void run(){
        
    }
};
struct Student:public Person {
    int m_no;
    void study() {
        m_age = 10;
    };
};

struct GoodStudent:public Student {
    
    int m_money;
    void work() {
        m_age = 10;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
