//
//  main.c
//  sizeoffloat
//
//  Created by jser.me on 14-3-5.
//  Copyright (c) 2014年 jser.me. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char *argv[]) {
  int i = 17;
  int *addressOfI = &i;
  printf("address is %p\n", addressOfI);
  printf("read i through address %d \n", *addressOfI);

  float num = 12.0;
  printf("float size is %zu\n", sizeof(num));
  return 0;
}
