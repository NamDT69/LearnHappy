#include <conio.h>
#include <stdio.h>

int main(){
    double a,b,c;
    
    printf("nhap a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("so lon nhat la : %.0lf", ((a>b?a:b)>c?(a>b?a:b):c));
    
    getch();
}