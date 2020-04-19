//
//  main.cpp
//  const1
//
//  Created by 侯森魁 on 2020/4/19.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Person {
    int m_age;
public:
    void run() {
        cout << "run()" << endl;
    }
    void run () const{
        cout << "void run () const" << endl;
    }
    static void test() {
        cout << "static void test()" << endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    //常量对象，只能调用常量函数
     Person person{};
    person.run();
    
    return 0;
}
