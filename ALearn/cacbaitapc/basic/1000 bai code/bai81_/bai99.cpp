#include <conio.h>
#include <stdio.h>

int main(){
    double a,b,c;
    // 3 6 4
    //b=b-a+c b=7
    //a=b-a-(c-a) a=3
    //c=b+(a-c) c=6
    //b=b-c+a b=4
    
    // 3 2 1
    // b=0;// nháp
    printf("nhap a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>c){
        a=a-c;
        c=c+a;
        a=c-a;
    }
    if(a>b){
        a=a-b;
        b=b+a;
        a=b-a;
    }
    if(b>c){
        b=b-c;
        c=c+b;
        b=c-b;
    }
    
    printf(" sap xep tang dan : %.2lf ,%.2lf, %.2lf",a,b,c);
    
    getch();
}