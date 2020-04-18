//
//  main.cpp
//  多继承
//
//  Created by 侯森魁 on 2020/4/18.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>

/*
 多继承会增加程序的复杂性
 多继承有很好的用途:
 一个类实现多个接口(Java)
 一个类遵守多份协议(OC)
 一个类继承多个抽象类(C++)
 */
using namespace std;
class Worker {
public:
    int m_salary;
    Worker(int salary = 0):m_salary(salary){
        cout << "Worker(int salary = 0)" << endl;
    }
    void work(){
        cout << "Worker work() - salary = " << m_salary << endl;
    }
    
    ~Worker(){
        cout << "Worker ~Worker()" <<endl;
    }
};

class Student {
public:
    int m_score;
    Student(int score = 0):m_score(score){
        cout << "Student(int score = 0)" << endl;
    }
    void study(){
        cout << "Student study() - score" << m_score << endl;
    }
    
    ~Student(){
        cout << "Student ~Student()" <<endl;
    }
};
class HSK :public Worker,public Student {
public:
    int m_grade;
    //多继承下面构造函数的调用
    HSK(
        int score,
        int salary,
        int grade):Worker(salary),Student(score),m_grade(grade){
        cout << "HSK HSK(int score,int salary int grade)" << endl;
    }
    ~HSK(){
        cout << "HSK ~HSK()" <<endl;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    {
        /*
        明确多继承下面，构造函数和析构函数的调用顺序
        */
        HSK * h = new HSK(1, 1, 1);
        delete h;
        /*
         Worker(int salary = 0)
         Student(int score = 0)
         HSK HSK(int score,int salary int grade)
         HSK ~HSK()
         Student ~Student()
         Worker ~Worker()
         */
        
    }
    return 0;
}
