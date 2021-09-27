#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    double a,b,c;
    do{
        printf("nhap a,b,c:");
        scanf("%lf%lf%lf",&a,&b,&c);
    }while(a+b==0||a==0);
    double deta=b*b-4*a*c;
    if(deta<0) printf("pt vo nghiem");
    else if(deta==0) printf("phuong trinh co nghem kep x=%lf",-b/(2*a));
    else printf("phuong trinh co nghiem x1=%lf  ,   x2=%lf",(-b+sqrt(deta))/(2*a),(-b-sqrt(deta))/(2*a));
    getch();
}