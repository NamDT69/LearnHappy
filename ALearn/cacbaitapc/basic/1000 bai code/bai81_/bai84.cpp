#include <stdio.h>
#include <conio.h>
int main(){
    double a,b;
    printf("nhap a,b:");
    scanf("%lf%lf",&a,&b);
    if(a==0) printf("phuong trinh vo  nghiem");
    else if (a==0&&b==0) printf("phuong trinh co vo so nghiem");
    else printf("phuong trinh %.2lfx+%.2lf=0 co nghiem x=%.2lf",a,b,-b/a);
    getch();
}