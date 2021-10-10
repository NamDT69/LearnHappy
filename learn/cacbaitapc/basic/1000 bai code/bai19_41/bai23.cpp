//Bài 23: Đếm số lượng “ước số” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#define vonglap(i,x) for(int i=2;i<=x/2;i++)//vong lăpj sử dụng define
#define uocso(s,n,i) if(n%i==0) s++// nếu đúng thì xuất ra
//#define xuat(i) printf("%d\t",i)
int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    int s=1;
    vonglap(i,n)
    uocso(s,n,i);
    printf ("%d",s+1);
    getch();
}