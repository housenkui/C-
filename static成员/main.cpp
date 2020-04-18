//
//  main.cpp
//  static成员
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
class Car {
public:
    int m_price;
    static int ms_count; //全局区 在内存中只有一份
    static int getCount() {  //代码区
        return ms_count;
    }
    
    void test(){ //代码区
        m_price = 10;
    }
    static  void test1(){ //代码区
        cout << "static  void test1()" <<endl;
    }
};

class WhiteCar:public Car {
    
};
int Car ::ms_count = 0;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Car::test1();
    
    Car::ms_count = 20;
    WhiteCar::ms_count  = 10;
    
    cout << Car::ms_count << endl;
    return 0;
}
