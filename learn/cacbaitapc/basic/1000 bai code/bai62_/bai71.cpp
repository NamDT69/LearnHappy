//Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)
#include <conio.h>
#include <stdio.h>
#include <math.h>
double dequy2(int n){
    if(n==1) return 1;
    return n+dequy2(n-1);
}
double dequy(int x,int n){
    if(n==1) return -x;
    return pow(-1,n)*(pow(x,n)/dequy2(n))+dequy(x,n-1);
}
int main(){
    int x,n;
    printf("nhap x,n:");
    scanf("%d%d",&x,&n);
    printf("gia tri cua s(x,n)=%lf",dequy(x,n));
    getch();
}