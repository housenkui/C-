//
//  main.cpp
//  单例模式
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 1.把构造函数私有化
 2.定一个私有的静态成员变量指针，用于指向单例对象。
 3.提供一个公共的返回单例对象的静态成员函数。
 */
class Sun {
public:
    static Sun *sharedSun(){
        if (ms_sun == NULL) { //还需要考虑多线程访问安全的问题
            ms_sun = new Sun();
        }
        return ms_sun;;
    }
    static void deleteSun() {
        if (ms_sun == NULL) {
            return;
        }
        delete ms_sun;
        ms_sun = NULL;
    }
private:
    static Sun * ms_sun;
    Sun() {
        cout << "Sun()" <<endl;
    }
};
//初始化
Sun * Sun::ms_sun = NULL;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Sun *s1 = Sun::sharedSun();
    Sun *s2 = Sun::sharedSun();
    Sun *s3 = Sun::sharedSun();
    
    cout <<s1 << endl;
    cout <<s2 << endl;
    cout <<s3 << endl;
    
    int *p = new int();
    *p = 5;
    delete p;
    p = NULL;
    
    cout << p << endl;
    
    return 0;
}
