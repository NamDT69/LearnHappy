#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int n;
    do{
        printf("nhap so n:");
        scanf("%d",&n);
    }while(n<0);
    double p=(log(n)/log(2));
   
     if(p==floor(p)) printf("n co dang 2 mu %0.0lf",p);//floor lam tron ve so nguyen
     else  printf("n ko co dang 2 mu k");
    

    getch();
}