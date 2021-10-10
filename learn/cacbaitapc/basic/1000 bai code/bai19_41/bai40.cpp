//Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn
#include <conio.h>
#include <stdio.h>
#include <cmath>

float dequy(unsigned int n,int x){
    if(n==2)
    return sqrt(x);
    return sqrt(pow(x,n)+dequy(n-1,x));
}
int main(){
    unsigned int n;
    int x;
    printf("enter a positive integer n and x:");
   scanf("%u%d",&n,&x);   
   printf("s(n) =%f",dequy(n,x));
    getch();
}