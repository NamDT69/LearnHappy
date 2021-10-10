//Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    int s;
    int sum=0;
    while(n>=10){
        s=n%10;
        if(s%2==0)
        sum+=s;
        n/=10;
    }
    return (n%2==0?n+sum:sum);
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("tong cac so chan la : %d",dem(n));

    getch();
}