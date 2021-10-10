#include  <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int y;
    double x;
    do{
    printf("nhap y ,x:");
    scanf("%d%lf",&y,&x);
    }while(y<0&&x<0);
    printf("gia tri cua can bac n cua x=%.3lf",pow((double)x,(double)y));
    getch();
}

