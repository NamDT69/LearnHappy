//Bài 54: Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n
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
int dem2(long n){
    int s;
    int min=dem(n);
    int i=0;
    while(n>=10){
        s=n%10;
        if(min==s) i++;
        n/=10;
    }
    return (n==min?i+1:i);
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("so chu so nguyen duong nho nhat la : %d",dem2(n));

    getch();
}