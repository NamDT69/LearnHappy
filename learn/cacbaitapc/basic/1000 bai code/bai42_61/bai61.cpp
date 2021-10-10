//61. Hãy kiểm tra các chữ số của số nguyên dương n có giam dần từ trái
//sang phải hay không?
#include <conio.h>
#include <stdio.h>
int kiemtra(long n){
    int max=0;
    while(n>=10){
        if((n%10)<=max)  return 0;
        max=n%10;
        n/=10;
    }
    return (n>max?1:0);
}
int main(){
    long n;
    do{
        printf("enter in positive interger:");
        scanf("%ld",&n);
    }while(n<0);

    (kiemtra(n)==1?printf("so nguyen duong n co giam dan tu trai sang phai"):printf("so nguyen duong n ko giam dan tu trai sang phai"));
    getch();
}