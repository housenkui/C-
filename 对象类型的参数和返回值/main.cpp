//
//  main.cpp
//  对象类型的参数和返回值
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Car {
    int m_price;
public:
    //带有一个参数的构造函数
    Car(int price = 0):m_price(price){
        cout << "Car(int) -" << this << "-" << this->m_price << endl;
    }
    //拷贝构造函数
    Car(const Car &car):m_price(car.m_price) {
        cout << "Car(const Car & -" << this << "-" << car.m_price << endl;
    }
};


void test1(Car car){
    
}

Car test2() {
    Car car(10);//分配栈空间的内存
    return car;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    {
        const char *p = "abc";
        cout << *p << endl;
        
        char a[] = "abc";
        cout << &a << endl;
    }
  
    
    std::cout << "Hello, World!\n";
    
//    {
//        Car car1(10);
//        test1(car1);
//    }
//    {
//        Car car2 = test2();
//    }
    {
        Car car3;
        car3 = test2();
    }
    return 0;
}
