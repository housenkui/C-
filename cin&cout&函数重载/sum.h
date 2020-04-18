//
//  sum.h
//  cin&cout&函数重载
//
//  Created by 侯森魁 on 2020/4/12.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#ifndef sum_h
#define sum_h

#include <stdio.h>

#ifdef __cplusplus  //如果是C++的环境添加  /* C++/C混编，调用C的API需要告诉编译器按照C的方式去编译*/
extern "C" {
#endif
int sum(int a, int b);
int minus(int a, int b);
#ifdef __cplusplus
}
#endif

#endif /* sum_h */
