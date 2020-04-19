//
//  main.cpp
//  运算符重载
//
//  Created by 侯森魁 on 2020/4/19.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
//operator overload
class Point {
    friend Point operator + (const Point &,const Point &);
    int m_x;
    int m_y;
public:
    Point(int x,int y):m_x(x),m_y(y){}
    void display() {
        cout << "(" << this->m_x << "," << this->m_y << ")" << endl;
    }
    
    Point &operator += (const Point &point) { //这个不会调用拷贝构造函数
        this->m_x += point.m_x;
        this->m_y += point.m_y;
        return *this;
    }
};

//Point operator + (Point p1,Point p2) { //这个会调用拷贝构造
//    return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
//}

Point operator + (const Point &p1,const Point &p2) { //这个不会调用拷贝构造函数
    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Point p1(10,20);
    Point p2(20,20);
    
    Point p3 = p1 + p2;
    p3.display();
    
    Point p4(10,20);
    Point p5(20,20);
    p4 += p5;
    p4.display();
    return 0;
}
