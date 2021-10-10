//Bài 74: Tính S(x, n) = 1 – x + x^3/3! – x^5/5! + … 
//+ (-1)^n+1 * x^2n+1/(2n + 1)!
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int x,n;
    double s=1;
    printf("nhap x:");
    scanf("%d",&x);
    do{
        printf("\nnhap n:");
        scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<=n;i++){
        double d=1;
        for(int j=1;j<=i*2+1;j++)
            d*=j;
        s+=pow(-1,i+1)*(pow(x,i*2+1)/d);
    }
    printf("gia tri s(x,n)=%lf",s);
    getch();
}
