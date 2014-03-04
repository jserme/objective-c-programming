//
//  main.c
//  chapter4
//
//  Created by jser.me on 14-3-4.
//  Copyright (c) 2014年 jser.me. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 20;
    int j = 25;
    
    int k = (i>j)?10:5;//k=5
    
    if(5<j-k){//true and end
        printf("The first expression is true");
    } else if(j>i){//true
        printf("The second expression is true");
    } else{
        printf("Neither expression is true");
    }

    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

