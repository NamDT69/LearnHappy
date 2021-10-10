//Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n

#include <stdio.h>
#include <conio.h>
#define vonglap(i,x) for(int i=2;i<=x/2;i++)//vong lăpj sử dụng define
#define uocso(s,n,i) if(n%i==0&&i%2==0) s++// nếu đúng thì xuất ra
//#define xuat(i) printf("%d\t",i)
int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    int s=0;
    vonglap(i,n)
    uocso(s,n,i);
    if(n%2==0)
    s++;
    printf("%d",s);
   
    getch();
}