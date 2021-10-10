//ax+b=0
// ax^2+bx+c=0
//ax^4+bX^2+c=0
#include <conio.h>
#include <stdio.h>

#include <math.h>
double bacnhat(double a,double b){
    return -b/a;
}
void bac2(double a,double b,double c){
    double d=b*b-4*a*c;
    if(d<0){
        printf("\nphuong trih vo nghiem");
    }
    else{
        printf("\nnghiem 1:%0.2lf",(-b+sqrt(d))/(2*a));
        printf("\nnghiem 2:%0.2lf",(-b-sqrt(d))/(2*a));
    }
}
void bac4(double a,double b,double c){
    double d=b*b-4*a*c;
    if(d<0||(-b+sqrt(d))/(2*a)<0&&(-b-sqrt(d))/(2*a)<0){
        printf("\nphuong trih vo nghiem");
    }else if((-b+sqrt(d))/(2*a)==0){
        printf("x=0");
    }
    else{
        if((-b+sqrt(d))/(2*a)>0){
              printf("\nnghiem 1:%0.2lf",sqrt(-b+sqrt(d))/(2*a));
               printf("\nnghiem 3:%0.2lf",-sqrt(-b+sqrt(d))/(2*a));
        }
        if((-b-sqrt(d))/(2*a)>0){
            double d=(-b-sqrt(d))/(2*a);
            printf("\nnghiem 2:%0.2lf",pow((double)d,(double)1/2));

            printf("\nnnghiem 4:%0.2lf",-sqrt((double)d));
        }
    }
}
int main(){
    double a,b,c;
    do{
        printf("nhap a,b,c:");
        scanf("%lf%lf%lf",&a,&b,&c);
    }while(a==0);

    printf("%0.2lfx+%0.2lf=0 co nghiem x=%0.2lf",a,b,
    
        bacnhat(a,b));
      printf("\n%0.2lfX^2+%0.2lfx+%0.2lf=0",a,b,c);bac2(a,b,c);
     printf("\n%0.2lfX^4+%0.2lfx^2+%0.2lf=0",a,b,c);bac4(a,b,c);
    getch();
}