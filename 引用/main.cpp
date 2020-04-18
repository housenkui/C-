//
//  main.cpp
//  引用
//
//  Created by 侯森魁 on 2020/4/12.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 在C语言中，使用指针(Pointer)可以间接获取、修改某个变量的值
 在C++中，使用引用(Reference)可以起到和指针类似的功能
 int age = 20;
 // rAge就是一个引用
 int &rAge = age;
 注意点:
 引用相当于是变量的别名(基本数据类型、枚举、结构体、类、指针、数组等、都可以有引用)
 对引用做计算，就是对引用所指向的变量做计算
 在定义的时候就必须初始化，一旦指向了某个变量，就不可以在改变，“从一而终”
 可以利用引用初始化另一个引用，相当于某个变量的多个别名
 不存在【引用的引用、指向引用的指针、引用数组】
 
 引用存在的价值之一：比指针更安全，函数返回值可以被赋值 可参考globalAge
 引用的本质就是指针
 */
int globalAge = 10;
int &func() {
    return globalAge;
}
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void testArray() {
    int *a[4];//a是指针数组，它里面可以放4个指针
    int (*b)[4];//b是指向数组的指针，所指向的数组可以放4个int类型的数据
    
    int array[] ={10,20,30};
    int (&rArray)[3] = array;
}

struct Student {
    int age;
};

void testStruct() {
    /*
     const是常量的意思，被其修饰的变量不可修改
     如果修饰的是类、结构体(的指针)，其成员也是不可以修改
     
     以下5个指针分别有什么含义?
     int age = 10;
     *p0是常量，p0不是常量
     const int *p0 = &age;
     *p1是常量，p1不是常量
     int const *p1 = &age;
     p2是常量，*p2不是常量
     int *const p2 = &age;
     p3是常量，*p3是常量
     const int *const p3 = &age;
     p4是常量，*p4是常量
     int const * const p4 = &age;
     
     上面的指针问题可以用以下结论来解决:
     const 修饰的是其右边的内容
     */
    Student stu = {20};
    
    stu.age = 40;
    
    Student *pStu = &stu; //结构体指针
    pStu->age = 50;//利用指针间接修改结构体中的变量
    cout << stu.age <<endl;
}
void testPointer2() {
    //引用的本质就是指针
    int age = 10;
    //不能通过指针修改所指向的内容
    int const *pAge1 = &age;
    
    //不能修改指针的指向，但是可以通过指针修改所指向的内容
    int * const pAge2 = &age;
    
    /*
     常引用可以被const修饰，这样就无法通过引用修改数据了，可以称为常引用
     const必须写在&符号的左边，才能算是常引用
     
     const 引用的特点
     可以指向临时数据(常量，表达式，函数返回值等)
     可以指向不同类型的数据
     作为函数的参数时，(此规则也适用于const指针)
       可以接受const和非const实参(非const引用，只能接受非const实参)
       可以跟非const引用构成重载
     */
}

void testPoint() {
    //指针也可以有引用
    int a = 10;
    int b = 20;
    int *p = &a;
    int *&rP = p;
    rP = &b;//rP只是p的别名，
    *p = 30;
    
    cout << a << endl;
    cout << b << endl;//明白了 2020年04月12日20:07:34
}

int main(int argc, const char * argv[]) {
    testStruct();
    int v1 = 10;
    int v2 = 20;
    swap(v1, v2);//引用的使用场景
    
    func() = 30;
    cout << globalAge << endl;
    // insert code here...
    testPoint();
    cout << "Hello, World!\n";
    int age = 20;
    int *pAge = &age;
    //定义了一个引用，相当于是变量的别名
    int &rAge = age;
    rAge = 40;
    
    cout << rAge <<endl;
    cout << *pAge <<endl;
    
    *pAge= 30;//相当于将30赋值给指针所指向的变量等价于 age = 30
    
    cout << age << endl;
    return 0;
}
