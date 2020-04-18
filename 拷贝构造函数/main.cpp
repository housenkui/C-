//
//  main.cpp
//  拷贝构造函数
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Car {
    int m_price;
    int m_length;
public:
    Car (int price = 0, int length = 0):m_price(price),m_length(length) {
        cout << "Car(int price = 0, int length = 0)" << endl;
    }
    //拷贝构造函数(格式是固定的)
    Car(const Car &car) :m_price(car.m_price),m_length(car.m_length) {
        cout << "Car (const Car & car)" << endl;
    }
    void display() {
        cout << "price" << this->m_price << ",length" << this->m_length << endl;
    }
};
class Person {
    int m_age;
public:
    Person(int age = 0):m_age(age){}
    Person(const Person &person):m_age(person.m_age){}
};
class Student :public Person {
    int m_score;
public:
    Student(int age = 0,int score = 0):Person(age),m_score(score){}
    Student(const Student &student):Person(student),m_score(student.m_score){}
};
int main(int argc, const char * argv[]) {
    // insert code here...
   cout << "Hello, World!\n";
    Car car2(100,5);
    
    Car car3(car2);
    //利用car2对象创建了car3对象，会调用car3对象的拷贝构造函数进行初始化
    car3.display();
    cout << "&car2 = " << &car2 << endl;
    cout << "&car3 = " << &car3 << endl;
    
    Car car4;
    Car car5 = car4;
    //这里是赋值操作，直接将car4的8个字节数据拷贝给car3的8个字节
    //但是这并不会创建新对象，所以不会调用拷贝构造函数
 
    
    return 0;
}
