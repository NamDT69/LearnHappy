//Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số
#include <conio.h>
#include <stdio.h>

float vonglap(unsigned int n){
    float s=1;
    for (int i=0;i<n;i++){
        s=1+1/s;
    }
    return s;
}
int main(){
    unsigned int n;
    printf("enter a positive integer:");
   scanf("%u",&n);   
   printf("s(n) =%f",1/vonglap(n));

    getch();
}