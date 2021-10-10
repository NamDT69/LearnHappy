//55. Hãy đêm số lượng chữ số đầu tiên của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    while(n>=10)
        n/=10;
    return n;
}
int dem2(long n){
    int s;
    int h=dem(n);
    int i=0;
    while(n>=10){
        s=n%10;
        if(h==s) i++;
        n/=10;
    }
    return (n==h?i+1:i);
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("so chu so nguyen duong dau  tien la : %d",dem2(n));

    getch();
}