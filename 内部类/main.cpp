//
//  main.cpp
//  内部类
//
//  Created by 侯森魁 on 2020/4/19.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Person {
    int m_age;
public:
    Person(){
        cout << "Person()" << endl;
    }
    
    class Car {
        int m_price;
    public:
        Car(){
            cout << "Car()" <<endl;
        }
    };
};

//声明和实现分离
class Point {
    class Math {
        void test();
    };
};
void Point::Math::test(){
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Person::Car car;
    return 0;
}
