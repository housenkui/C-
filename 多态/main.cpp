//
//  main.cpp
//  多态
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 面向对象的3大特性：
 封装：成员属性私有化，通过封装方法来访问成员属性
 继承
 多态：父类指针指向子类对象，同一个事件作用与不同的对象，产生不同的行为
 单身男孩，有女友的男孩，同是属于男孩，对于同一个个事件，唱歌，单身男孩的行为是独唱，有女友的男孩的行为是合唱。
 C++的多态使用virtual来定义需要子类需要重写的的虚函数，
 虚函数的实现原理是虚表，这个虚表里面存储着最终需要调用的虚函数地址，这个虚表也叫虚函数表 ，同一类型的所有对象都指向这个
 虚函数表
 C++的编译器遇到virtual，就会在对象的地址添加一个虚函数表的地址，当调用相应的函数时，就会通过这个地址找到虚函数表，然后在虚表里面查找相应的函数地址，进行直接的调用.
 最重要的还是要理清对象的内存布局.
 */
class Animal {
    int m_age;
public:
    virtual void run() {
        cout << "Animal run()"<< endl;
    }
};
class Cat :public Animal {
public:
    void run() {
        cout <<"Cat run()" <<endl;
    }
};
class Dog:public Animal {
public:
    void run() {
        cout <<"Dog run()" <<endl;
    }
};

class Pig:public Animal {
public:
    void run() {
        cout <<"Pig run()" <<endl;
    }
};
int main(int argc, const char * argv[]) {
    
    cout << sizeof(Animal) <<endl;
    // insert code here...
    std::cout << "Hello, World!\n";
    Animal *animal = new Dog();
    animal->run();
    return 0;
}
