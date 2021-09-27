//60  Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái
//sang phải hay không?
#include <conio.h>
#include <stdio.h>
bool kiemtra(long n){
    int max=n;
    while(n>=10){
        if((n%10)>=max)  return 0;
        max=n%10;
        n/=10;
    }
    return (n<max?1:0);
}
int main(){
    long n;
    do{
        printf("enter in positive interger:");
        scanf("%ld",&n);
    }while(n<0);

    (kiemtra(n)==1?printf("so nguyen duong n co tang dan tu trai sang phai"):printf("so nguyen duong n ko tang dan tu trai sang phai"));
    getch();
}