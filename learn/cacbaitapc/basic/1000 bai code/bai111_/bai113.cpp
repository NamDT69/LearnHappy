#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){
    double x,d,sum=0;

        printf("nhap x:");
        scanf("%lf",&x);
    
    int h,s=sin(x)/0.00001;
   
    for(int i=0;h!=s;i++){
        d=1;
        for(int j=1;j<=i*2+1;j++)
            d*=j;
        sum+=(pow(-1,i)*pow(x,i*2+1)/d);
        h=sum/0.00001;
   }
    printf("gia tri cua sin(x)=%lf",sum);
    getch();
}
