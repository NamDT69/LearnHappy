#include <stdio.h>
#define x 1
#ifdef x
  printf("x da co value");//vi x =1 nen vung nay  su dung
#endif 
#ifndef x
printf("x ko co value");
// vi x =1 nen vung nay ko su dung
#endif
// muc dich lam su dung define ko bi trung lap ,ngan chan khai bao kep 
#else // thay cho ifndef or ifdef