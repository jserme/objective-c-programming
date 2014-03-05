//
//  main.c
//  loop
//
//  Created by jser.me on 14-3-4.
//  Copyright (c) 2014年 jser.me. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char *argv[]) {

  int start = 99;
  while (start != 0) {
    printf("%d\n", start);
    if (start % 5 == 0) {
      printf("found one! %d \n", start);
    }
    start -= 3;
  }

  // insert code here...
  printf("Hello, World!\n");
  return 0;
}
