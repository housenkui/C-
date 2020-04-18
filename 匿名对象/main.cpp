//
//  main.cpp
//  匿名对象
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 匿名对象:没有变量名、没有被指针指向的对象，用完后马上调用析构函数
 */
class Person {
public:
    Person(){
        cout << "Person()" <<endl;
    }
    void display() {
        cout << "display()" <<endl;
    }
    
    ~Person(){
        cout << "~Person()" <<endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    {
        //匿名对象
      Person().display();
    }

    return 0;
}
