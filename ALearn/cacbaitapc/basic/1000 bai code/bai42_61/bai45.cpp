//Bài 45: Hãy tính tích các chữ số của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    int s;
    int sum=1;
    while(n>=10){
        s=n%10;
        sum*=s;
        n/=10;
    }
    return n*sum;
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("tich cac chu so la : %d",dem(n));

    getch();
}