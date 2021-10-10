//Bài 50: Hãy tìm số đảo ngược của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    int s;
    int sum=0;
    while(n>=10){
        s=n%10;
        sum=(sum+s)*10;
        n/=10;
    }
    return n+sum;
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("dao nguoc cua so nguuyen duong la : %d",dem(n));

    getch();
}