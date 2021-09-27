#include <conio.h>
#include <stdio.h>
#include <math.h>
int dequy(int n){
    if(n==1) return 1;
    return pow(n,n)+dequy(n-1);
}
int main(){
    int n;
    do{
        printf("nhap n:");
        scanf("%d",&n);
    }while(n<1);
     printf("gia tri cua s(n) la :%d",dequy(n));

    getch();
}