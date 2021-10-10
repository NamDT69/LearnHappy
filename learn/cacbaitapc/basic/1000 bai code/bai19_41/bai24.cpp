//Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#define vonglap(i,x) for(int i=2;i<=x/2;i++)//vong lăpj sử dụng define
#define uocso(n,i) if(n%i==0&&i%2==1) printf("\t%d",i)// nếu đúng thì xuất ra
//#define xuat(i) printf("%d\t",i)
int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    printf("1");
    vonglap(i,n)
    uocso(n,i);
    if(n%2==1)
    printf("\t%u",n);
   
    getch();
}