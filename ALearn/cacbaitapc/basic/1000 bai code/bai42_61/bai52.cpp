//Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    int s;
    int min=n;
    while(n>=10){
        s=n%10;
        if(min>s)
        min=s;
        n/=10;
    }
    return (n>min?min:n);
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("chu so nguyen duong nho nhat la : %d",dem(n));

    getch();
}