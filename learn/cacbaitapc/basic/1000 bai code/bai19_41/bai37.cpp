//Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
#include <conio.h>
#include <stdio.h>
#include <cmath>

float dequy(unsigned int n){
    if(n==2)
    return sqrt(2);
    return pow(n+dequy(n-1),(float)1/n);
}
int main(){
    unsigned int n;
    printf("enter a positive integer:");
   scanf("%u",&n);   
   printf("s(n) =%f",dequy(n));
    getch();
}
