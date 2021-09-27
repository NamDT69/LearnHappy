//Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
#include <conio.h>
#include <stdio.h>
#include <cmath>

float dequy(unsigned int n){
    if(n==1)
    return sqrt(2);
    return sqrt(2+dequy(n-1));
}

int main(){
    unsigned int n;
    printf("enter a positive integer:");
    scanf("%u",&n);
    printf("s(n)=%f",dequy(n));
    getch();
}