#include  <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int n,x;
    do{
    printf("nhap n ,x:");
    scanf("%d%d",&n,&x);
    }while(n<=0&&x<0);
    printf("gia tri cua can bac n cua x=%lf",pow((double)x,(double)1/n));
    getch();
}