#include <conio.h>
#include <stdio.h>
#include <cmath>
// đề bài :Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!

int dequy(unsigned int n){
    if(n==1||n==0)
    return 1;
    return n*dequy(n-1);
}

float dequy2(unsigned int n,unsigned  int x){
    int p=2*n+1;
    if(p==1)
    return x;
    return pow(x,p)/dequy(p)+dequy2(n-1,x);
}

int main(){
    unsigned int x;
   unsigned int n;
   printf("nhap x va nhap so n can tinh lan luot:");

   scanf("%u%u",&x,&n);

   printf("\n tong cua truong trinh la :%f",1+dequy2(n,x));
    getch();
}