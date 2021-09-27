#include <stdio.h>
#ifndef _HEADER_H_
#define _HEADER_H_
 
 extern int e=100;
//  Có thể định nghĩa 1 biến global trong 1 file (.c/.cpp/.h) và truy cập biến này từ 1 file (.c/.cpp/.h) khác.
//   Để làm điều này, biến phải được khai báo ở cả 2 file và từ khóa extern được thêm trong lần khai báo thứ 2.
void display_x(){
    printf("\n X=%d",e);
}
 
#endif