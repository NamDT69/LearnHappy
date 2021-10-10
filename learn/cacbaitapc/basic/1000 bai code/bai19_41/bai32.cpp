//Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
#include <stdio.h>
#include <conio.h>
#define vonglap(n,i) for(int i=2;i<=n/2;i++)
#define quaternumber(s,n,i) if(i*i==n) {s++;break;}
int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    int s=0;
    vonglap(n,i)
    quaternumber(s,n,i);
    (s==1||n==1||n==0?printf("day la so chinh phuong"):printf("day khong la so chinh phuong"));
    getch();
}