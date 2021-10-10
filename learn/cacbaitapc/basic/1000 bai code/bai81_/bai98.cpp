#include <stdio.h>
#include <conio.h>

int main(){
    double a,b,c,d,e,f;
    do{
        printf("nhap a,b,c,d,e,f:");
        scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
    }while(a+b==0||d+e==0);
    // double arr[3][3]=
    // {{a,b,c},
    //  {d,e,f}
    // };
    double det=a*e-b*d;
    double det1=a*f-c*d;
    double det2=-b*f+c*e;
    if (det==0) {
        if(det1!=0||det2!=0) printf("phuong trinh vo nghiem");
        else printf("phuong trinh vo so nghiem");
    }else{

        printf("phuong trih co nghiem x=%.3lf",det2/det);
        printf("\nphuong trih co nghiem y=%.3lf",det1/det);
    }
    getch();
}