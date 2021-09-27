#include <stdio.h>
#include <conio.h>
#include <math.h>
int kiemtra(long n){   
    int i=1;
    if(n/10<1) return 1;
    return i+kiemtra(n/10);  
}
int tinhtoan(long n){
    long h=kiemtra(n);
    long  s=0;
    while(n>0){
        s+=pow(n%10,h);
        n/=10;
    }
    return s;
}
int main(){
    long i=1,s=0;
    printf("cac so armstrong ");
    for(long i=0;i<=1000000;++i){
        if(tinhtoan(i)==i){
            printf("%d\t",i);
        }
    }
  
    getch();
}
