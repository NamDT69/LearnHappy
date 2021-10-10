//Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
#include <stdio.h>
#include <conio.h>
#define vonglap(i,x) for(int i=2;i<=x/2;i++)//vong lăpj sử dụng define
#define uocso(s,n,i) if(n%i==0) s++// nếu đúng thì xuất ra
//#define xuat(i) printf("%d\t",i)
int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    int s=0;
    vonglap(i,n)
    uocso(s,n,i);
    (s==0?printf("day la so nguyenn to"):printf("day ko phai la so nguuyem to"));
   
    getch();
}