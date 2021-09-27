//Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
     if(n==0)
    return 0;
    int s;
    int sum=0;
    while(n>=10){
        s=n%10;
        sum+=s;
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
    printf("tong so luong chu so la : %d",dem(n));

    getch();
}