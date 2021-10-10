#include <conio.h>
#include <stdio.h>

int main(){
    double a,b,c;
    do{
    printf("nhap a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    }while(a<=0||b<=0||c<=0);
    if(a==b&&b==c&&c==a) printf("day la tam giac deu");

    else if(a*a+b*b==c*c||a*a==b*b+c*c||a*a==b*b-c*c){
         if(a==b||b==c||a==c) printf("day la tam giac vuong can");
         printf("day la tam giac vuong");
    } 

    else if(a+b>c&&b+c>a&&a+c>b) {
        if(a*a+b*b<c*c||a*a>b*b+c*c||a*a<b*b-c*c) printf("day la tam giac tu");
        else if(a==b||b==c||a==c) printf("day la tam giac can");
        else printf("day la tam giac nhon");
    }

    else printf(" day ko phai la tam giac ");

    
    getch();
}