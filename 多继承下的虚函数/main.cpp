//
//  main.cpp
//  多继承下的虚函数
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
/*
 如果子类继承的多个父类都有虚函数，那么子类对象就会产生对应的多张虚表
 */

using namespace std;
class Worker {
public:
    virtual void work(){
        cout << "Worker::work() - salary = "<< endl;
    }
};

class Student {
public:
   virtual void study(){
        cout << "Student::study() - score"<< endl;
    }
};
class HSK :public Worker,public Student {
public:
    void think(){
        cout << "HSK::think() - score" << endl;
    }
    void work(){
        cout << "HSK::work() - salary = "<< endl;
    }
    void study(){
        cout << "HSK::study() - score"<< endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
