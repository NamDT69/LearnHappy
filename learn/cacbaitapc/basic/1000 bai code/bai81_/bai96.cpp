#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    double x;
    printf("nhap gia tri n:");
    scanf("%lf",&x);
    (x<5?printf("fx=-2x^2+4x-9 se bang %.1lf",-2*pow(x,2)+4*x-9):printf("fx=2x^2+5x+9 se bang %.1lf",2*pow(x,2)+5*x+9));

    getch();
}