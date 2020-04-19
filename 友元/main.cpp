//
//  main.cpp
//  友元
//
//  Created by 侯森魁 on 2020/4/19.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 如果将函数A(非成员函数)声明为类C的友元函数，那么函数A就能直接访问类C对象的所有成员
 */
class Point{
    friend Point add(const Point &,const Point &);
    int m_x;
    int m_y;
public:
    int getX() const {return this->m_x;}
    int getY() const {return this->m_y;}
    Point(int x, int y):m_x(x),m_y(y){}//初始化列表
};

Point add(const Point &point1,const Point &point2) {
    return Point(point1.m_x + point2.m_x, point1.m_y + point2.m_y);
}

int main(int argc, const char * argv[]) {
    // insert code here...
   cout << "Hello, World!\n";
    Point point1(10, 20);
    Point point2(20, 30);
    
    Point point = add(point1, point2);
    
    return 0;
}
