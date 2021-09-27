//35. Tính S(n) = √1 + √2 + √3 + ⋯ √� − 1 + √� có n dấu căn#include <conio.h>
#include <stdio.h>
#include <conio.h>
#include <cmath>

float dequy1(unsigned int n, int i,int s){   
   if(n-i==n) 
   return sqrt(n);  
   return sqrt(n-i+dequy1(n,i-1,s));
}
int main(){
    
    unsigned int n;
    int i=n;
    int s=n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    printf("s(n) =%f",dequy1(n,i,s));
    getch();
 
}