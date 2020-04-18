//
//  main.cpp
//  纯虚函数
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Animal { //含有纯虚函数的类属于抽象类，不可以被实例化，理解了设计模式之抽象工厂，就很好理解
public:
    virtual void speak() = 0;//纯虚函数
    virtual void run() = 0;
};
class Cat:public Animal {
public:
    void speak() override {
        cout << "Cat speak()" << endl;
    }
    void run() override {
         cout << "Cat run()" << endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
