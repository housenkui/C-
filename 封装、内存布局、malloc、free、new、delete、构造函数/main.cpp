//
//  main.cpp
//  封装、内存布局、malloc、free、new、delete、构造函数
//
//  Created by 侯森魁 on 2020/4/17.
//  Copyright © 2020 侯森魁. All rights reserved.
//
/*
 
 */
#include <iostream>
using namespace std;
struct Person {
    int m_age;
    int m_id;
    int m_height;
    void run() {
        cout << "run()" << endl;
    }
    Person() {
        
    }
    Person(int age,int id,int height) {
        this->m_age = age;
        m_id = id;
        m_height = height;
    }
};
void test2() {
    int *p = new int; //分配8字节内存
    delete p;
}

void test5() {
    int *p = (int *)malloc(4);
    //memory set
    //从p开始的4个字节,每个字节都存放0
    memset(p, 0, 4); //相当于完成初始化
    cout << *p <<endl;
}

void test6() {
    Person person;
    person.m_id = 1;
    person.m_age = 20;
    person.m_height = 180;
    
    //memset函数是将较大的数据结构(比如对象、数组)内存清零的比较快的方法
    Person persons[] = {{1,20,180},{2,25,165},{3,27,170}};
    memset(persons, 0, sizeof(persons));
    //从persons地址开始 设置长度为sizeof(persons) 为0
    
}
/*
 构造函数(也叫构造器),在对象创建的时候自动调用，一般用于完成对象的初始化工作
 
 特点:函数名与类同名,无返回值(void都不能写),可以有参数，可以重载，可以有多个构造器
 一旦自定义了构造函数，必须用其中一个自定义的构造函数来初始化对象
 
 注意
 通过malloc分配的对象不会调用构造函数
 
 在某些特定的情况下，编译器才会为类生成空的无参的构造函数
 */
int main(int argc, const char * argv[]) {
 
    test5();
    Person person;
    person.m_age = 10;
    person.run();
    return 0;
}
