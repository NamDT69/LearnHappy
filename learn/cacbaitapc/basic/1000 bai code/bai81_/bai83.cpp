#include <stdio.h>
#include <conio.h>

 int main(){
     double a,b;
     printf("nhap a,b:");
     scanf("%lf%lf",&a,&b);
     if(a>0&&b>0) printf("a, b cung dau");
     else if(a<=0&&b<=0) printf("a,b cung dau");
     else printf("a b trai dau");

     getch();
 }