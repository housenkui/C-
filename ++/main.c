//
//  main.c
//  ++
//
//  Created by 侯森魁 on 2020/4/19.
//  Copyright © 2020 侯森魁. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int a = 8;
    a++;
    
    /*
        a++
        0x100000f66 <+38>: movl   $0x8, -0x14(%rbp)
        0x100000f6d <+45>: movl   -0x14(%rbp), %edx
        0x100000f70 <+48>: addl   $0x1, %edx
        0x100000f73 <+51>: movl   %edx, -0x14(%rbp)
        0x100000f76 <+54>: movl   %eax, -0x18(%rbp)
         0x100000f79 <+57>: movl   %ecx, %eax
     
     */
    /*
     ++a;
         0x100000f66 <+38>: movl   $0x8, -0x14(%rbp)
         0x100000f6d <+45>: movl   -0x14(%rbp), %edx
         0x100000f70 <+48>: addl   $0x1, %edx
         0x100000f73 <+51>: movl   %edx, -0x14(%rbp)
         0x100000f76 <+54>: movl   %eax, -0x18(%rbp)
     ->  0x100000f79 <+57>: movl   %ecx, %eax
     
     */
    return 0;
}
