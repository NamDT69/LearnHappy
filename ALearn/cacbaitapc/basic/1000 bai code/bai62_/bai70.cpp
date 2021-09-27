//Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3)  + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)
#include  <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int x,n; 
    double s=0;  
    do{
    printf("nhap n:");
    scanf("%d",&n);
    }while(n<=0);
    for(int i=1;i<=n;i++){
        int d=0;
        for(int j=1;j<=i;j++)
        d+=j;
        

        s+=pow(-1,i+1)*(1/(double)d);

    }
    printf("gia tri cua s(x,n)=%lf",s);
    getch();
}