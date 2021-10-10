//Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn
#include <conio.h>
#include <stdio.h>
#include <cmath>
int dequy1(unsigned int n){
    if(n==1||n==0)
    return 1;
    return n*dequy1(n-1);
}
float dequy(unsigned int n){
    if(n==1)
    return sqrt(1);
    return pow(dequy1(n)+dequy(n-1),(float)1/(n+1));
}
int main(){
    unsigned int n;
    printf("enter a positive integer:");
   scanf("%u",&n);   
   printf("s(n) =%f",dequy(n));
    getch();
}