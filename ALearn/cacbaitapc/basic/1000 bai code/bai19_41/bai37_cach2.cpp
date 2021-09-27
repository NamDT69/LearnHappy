//Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
#include <conio.h>
#include <stdio.h>
#include <cmath>

float vonglap(unsigned int n){
    float s=0;
    for (int i=2;i<n+1;i++){
        s=pow(i+s,(float)1/i);
    }
    return s;
}
int main(){
     unsigned int n;
    printf("enter a positive integer:");
   scanf("%u",&n);   
   printf("s(n) =%f",vonglap(n));
    getch();
}