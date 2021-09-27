//Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
#include <conio.h>
#include <stdio.h>
#include <cmath>

float dequy(unsigned int n){
    if(n==1)
    return sqrt(1);
    return pow(n+dequy(n-1),(float)1/(n+1));
}
int main(){
    unsigned int n;
    printf("enter a positive integer:");
   scanf("%u",&n);   
   printf("s(n) =%f",dequy(n));
    getch();
}