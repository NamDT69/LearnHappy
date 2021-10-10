#include <stdio.h>
#include <conio.h>
#define ma(i,a,b) for(int i=a;i<=b;i++)
#define xuat(x) printf("%d \n",x)//định nghĩa vòng lặp 
#define pi 3.14
#define max(a,b) printf("\n%d",(a>b?b:a))// nếu a>b thì lấy b ,ko thì lấy a
int main(){
    ma(i,3,8)
    xuat(i);
    
    float a=pi;
    printf("\n%f",a);
    max(4,2);

    getch();
    
}