//Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)  có n dấu căn
#include <conio.h>
#include <stdio.h>
#include <cmath>

float dequy1(unsigned int n,unsigned int i){   
   if(n-i==1) 
   return 1;  
   return sqrt(n-i+dequy1(n,i+1));
}
int main(){
    unsigned int i=0;
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    printf("s(n) =%f",dequy1(n,i));
    getch();
}