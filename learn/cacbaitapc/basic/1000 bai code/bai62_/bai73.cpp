//Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … 
//+ (-1)^n+1 * x^2n/(2n)!
#include <stdio.h>
#include <conio.h>
#include <math.h>
double dequy(int n){
    if(n==1||n==0) return 1;
    return n*dequy(n-1);
}
double dequy2(int x,int n){
    if(n==0) return -1;
    return pow(-1,n+1)*(pow(x,2*n)/dequy(2*n))+dequy2(x,n-1);
}
int main(){
    int x,n;
    double s=0;
    printf("nhap x:");
    scanf("%d",&x);
    do{
        printf("\nnhap n:");
        scanf("%d",&n);
    }while(n<0);
    printf("gia tri cua s(x,n) la:%lf",dequy2(x,n));
    getch();
}
