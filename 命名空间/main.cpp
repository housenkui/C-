//
//  main.cpp
//  命名空间
//
//  Created by 侯森魁 on 2020/4/17.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
#include "Person.hpp"
using namespace std;
void test() {
    Person person;
    person.setAge(10);
    cout << person.getAge() <<endl;
}

namespace SK {
    int g_no;
    class Person {
        public:
        int m_height;
    };
}
//命名空间避免命名冲突
namespace SK2 {
    int g_no;
    class Person {
        public:
        int m_age;
    };
}



void test1(){

    SK::g_no = 1;
    SK2::g_no = 2;
    SK::Person *p1 = new SK:: Person();
    p1->m_height = 182;
    
    SK2::Person *p2 = new SK2::Person();
    p2->m_age = 29;
    
}
//命名空间的嵌套
namespace SK3 {
    namespace SK4 {
        int g_age;
    }
}

void test2(){
    SK3::SK4::g_age = 20;
}

void test3(){
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    //默认的命名空间，没有名字
    ::test();
    using namespace SK;
    g_no = 10;
    SK::Person p;
    return 0;
}
