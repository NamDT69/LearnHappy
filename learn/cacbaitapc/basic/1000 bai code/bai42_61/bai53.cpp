//Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
#include <conio.h>
#include <stdio.h>

int dem(long n){
    int s;
    int max=0;
    while(n>=10){
        s=n%10;
        if(max<s)
        max=s;
        n/=10;
    }
    return (n>max?n:max);
}
int dem2(long n){
    int s;
    int max=dem(n);
    int i=0;
    while(n>=10){
        s=n%10;
        if(max==s) i++;
        n/=10;
    }
    return (n==max?i+1:i);
}
int main(){
     long n;
    do{
    printf("enter a positive integer:");
    scanf("%ld",&n);
    }while(n<0);
    printf("co so chu so nguyen duong lon nhat la : %d",dem2(n));

    getch();
}