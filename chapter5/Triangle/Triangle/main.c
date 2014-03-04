//
//  main.c
//  Triangle
//
//  Created by jser.me on 14-3-4.
//  Copyright (c) 2014年 jser.me. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float a, float b){
    return 180-a-b;
}

int main(int argc, const char * argv[])
{

    float angleA = 30.0;
    float angleB = 60;
    float angleC = remainingAngle(angleA, angleB);
    
    printf("The third angle is %.2f\n", angleC);
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

