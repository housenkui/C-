//
//  Person.hpp
//  命名空间
//
//  Created by 侯森魁 on 2020/4/17.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <stdio.h>

class Person {
    int m_age;
public:
    Person();
    ~Person();
    void setAge(int age);
    int getAge();
};
#endif /* Person_hpp */
