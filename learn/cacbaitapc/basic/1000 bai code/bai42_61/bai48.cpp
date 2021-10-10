//Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    int s;
    int sum=1;
    while(n>=10){
        s=n%10;
        if(s%2==1)
        sum*=s;
        n/=10;
    }
    return (n%2==1?n*sum:sum);
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("tich cac so le  la : %d",dem(n));

    getch();
}