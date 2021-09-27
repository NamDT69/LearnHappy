
#include <stdio.h>
#include <conio.h>
#include <cmath>
// đề bài :Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
int dequy(unsigned int n){
    if(n==1||n==0)
    return 1;
    return n*dequy(n-1);
}
// de quy dung de tinh giai thua

float tinh(unsigned int x,unsigned int n){
     
    float s=1;
    for (int i=1;i<=2*n+1;i=i+2){
        s=s+(pow(x,i)/dequy(i));
    }
    return s;
}
int main(){
   // printf("de quy :%d",dequy(5));
   unsigned int x;
   unsigned int n;
   printf("nhap x va nhap so n can tinh lan luot:");

   scanf("%u%u",&x,&n);

   printf("\n tong cua truong trinh la :%f",tinh(x,n));

   
    getch();
}