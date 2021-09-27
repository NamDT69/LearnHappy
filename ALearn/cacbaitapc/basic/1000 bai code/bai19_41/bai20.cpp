//đề bài:Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#define vonglap(i,x) for(int i=2;i<=x/2;i++)//vong lăpj sử dụng define
#define uocso(n,i) if(n%i==0) printf("%d\t",i)// nếu đúng thì xuất ra
//#define xuat(i) printf("%d\t",i)
int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    vonglap(i,n)
    uocso(n,i);
    //xuat(i);
    printf ("1\t%u",n);
    getch();
}