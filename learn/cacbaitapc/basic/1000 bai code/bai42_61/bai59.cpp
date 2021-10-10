//59. Hãy kiểm tra số nguyên dương n có phải số đối xứng hay không?
#include <conio.h>
#include <stdio.h>
int kiem_tra_nguoc_nhau(long n){
    int s=0;
    while(n>=10){
        s=(s+(n%10))*10;
        n/=10;
    }
    return n+s;
}
int main(){
    long n;
    do{
        printf("enter in positive interger:");
        scanf("%ld",&n);
    }while(n<0);
    (kiem_tra_nguoc_nhau(n)==n?printf("day la so doi xung"):printf("day ko phai la so doi xung"));
    getch();
}