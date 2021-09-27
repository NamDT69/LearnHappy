//Bài 69: Tính S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^2n+1
#include <stdio.h>
#include <conio.h>
#include <math.h>

int dequy(int n,int x){
    if(2*n+1==1) return x;
    return pow(-1,n)*pow(x,2*n+1)+dequy(n-1,x);
}
int main(){
    int x,n;
    printf("nhap x,n:");
    scanf("%d%d",&x,&n);
    printf("gia tri cua s(x,n)=%d",dequy(n,x));
    getch();
}