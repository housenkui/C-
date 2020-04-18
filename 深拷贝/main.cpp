//
//  main.cpp
//  深拷贝
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
//浅拷贝:(shallow copy) :指针类型仅仅是拷贝地址值
//深拷贝(deep copy) :拷贝内容到新申请的内存空间

/*
 如果需要实现深拷贝，就需要自定义拷贝构造函数
 将指针类型的成员变量所指向的内存空间，拷贝到新的内存空间
 */
class Car {
    int m_price;
    char *m_name;
public:
    Car(int price = 0,const char *name = NULL ):m_price(price){
        if (name == NULL) {
            return;
        }
        //申请堆空间存储字符串内容
        this->m_name = new char[strlen(name) + 1]{};
        
        //拷贝字符串内容到堆空间(string copy)
        strcpy(this->m_name, name);
        
        cout << "Car(int ,const char *)" << endl;
    }
    
    Car(const Car &car) :m_price(car.m_price) {
        if (car.m_name == NULL) {
            return;
        }
        //申请堆空间存储字符串内容
        this->m_name = new char[strlen(car.m_name) + 1]{};
        //拷贝字符串内容到堆空间(string copy)
        strcpy(this->m_name, car.m_name);
        
         cout << "Car(const Car &car)" << endl;
    }
    ~Car() {
        if (this->m_name == NULL) {
            return;
        }
        delete[] this->m_name;
        this->m_name = NULL;
        
        cout << "~Car()" << endl;
    }
    void display() {
        cout << "price is " << this->m_price << ",name is "  << this->m_name << endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    {
        char name[] = {'b','m','w','\0'};
        Car *car = new Car(100,name);
        car->display();
        delete car;
    }
    
    {
        Car car1(100,"bmw");
        //将car1的内存空间8字节覆盖car2的内存空间8字节
        Car car2 = car1;
        
    }
    
    return 0;
}
