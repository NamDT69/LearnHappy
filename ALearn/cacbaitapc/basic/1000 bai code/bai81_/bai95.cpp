#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    double a,b,c;
    printf("nhap a,b,c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    a=abs(a); b=abs(b);c=abs(c);
    printf("gia tri cua ba so la a=%lf,b=%lf,c=%lf",a,b,c);
    getch();
}