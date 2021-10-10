//Bài 67: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n
#include <conio.h>
#include <stdio.h>
#include <math.h>
int dequy(unsigned int n,int x){
    if(n==1) return x;
    return pow(x,n)*pow(-1,n+1)+dequy(n-1,x);
}
int main(){
    unsigned int n;
    int x;
    printf("nhap x,n:");
    scanf("%d%u",&x,&n);
    printf("\ngia tri cua s(x,n) =%d",dequy(n,x));
    getch();
}