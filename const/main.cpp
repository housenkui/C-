//
//  main.cpp
//  const
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Car {
public:
    int m_price;
    static const int m_wheelsCount = 4;
    
    Car():m_price(10) {
        cout << "Car():m_price(10)" << endl;
    }
    
    //不能在这个函数内部修饰当前对象的成员变量
    void test1() const {
        
    }
};

//static放在(数据段)全局区 不占用类对象的空间
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Car car1;
    cout << car1.m_price << endl;
//    car1.m_price = 100;
    
    
    Car car2;
    car2.m_price = 500;
//    car2.m_wheelsCount = 5;
    cout << sizeof(Car) << endl;
    return 0;
}
