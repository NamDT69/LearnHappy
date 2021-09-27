//57. Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không?
#include <conio.h>
#include <stdio.h>
int kiemtra(long n){
    while(n>=10){
        if((n%10)%2==1)  return 0;
        n/=10;
    }
    return (n%2==0?1:0);
}
int main(){
    long n;
    do{
        printf("enter in positive interger:");
        scanf("%ld",&n);
    }while(n<0);

    (kiemtra(n)==1?printf("so nguyen duong n toan la so chan"):printf("so nguyen duong n khong toan la so chan"));
    getch();
}