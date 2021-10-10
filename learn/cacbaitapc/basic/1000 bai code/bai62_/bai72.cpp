//Bài 72: Tính S(x, n) = – x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int x,n;
    double s=0;
    printf("nhap x:");
    scanf("%d",&x);
    do{
        printf("\nnhap n:");
        scanf("%d",&n);
    }while(n<=0);
    for(int i=1;i<=n;i++){
        int d=1;
        for(int j=1;j<=i;j++){
            d*=j;
        }
        s+=pow(-1,i)*(pow(x,i)/d);
    }
    printf("gia  tri cua s=%lf",s);
    getch();
}