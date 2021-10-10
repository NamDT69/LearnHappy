//Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
#include <stdio.h>
#include <conio.h>
#define vonglap(i,x) for(int i=2;i<=x/2;i++)//vong lăpj sử dụng define
#define uocso(s,n,i) if(n%i==0&&i%2==1) s=(i>s?i:s) // nếu đúng thì xuất ra
//#define xuat(i) printf("%d\t",i)
int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    int s=1;
    vonglap(i,n)
    uocso(s,n,i);
    
    printf("%d",s);
   
    getch();
}