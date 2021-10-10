//Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không
#include <conio.h>
#include <stdio.h>

int dem(long n){
    int s;
    while(n>=10){
        s=n%10;
        if(s%2==0)  return 1;
        n/=10;
    }
    return (n%2==1?0:1);
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    (dem(n)==0?printf("so nguyen duong n toan la so le"):printf("so nguyen duong n khong toan la so le"));

    getch();
}