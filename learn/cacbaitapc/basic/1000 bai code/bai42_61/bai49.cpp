//Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    if(n==0)
    return 0;
    while(n>=10){
        n/=10;
    }
    return n ;
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("chu so dau tien cua n  la : %d",dem(n));

    getch();
}