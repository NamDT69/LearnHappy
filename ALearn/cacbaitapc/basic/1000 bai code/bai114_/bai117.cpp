#include <stdio.h>
#include <conio.h>
#include <math.h>

int tinhtong(int n,int x){
    if(n==1) return x;
    return pow(x,n)+tinhtong(n-1,x);
}
int main(){
    int n,x;
    do{
        printf("nhap n,x:");
        scanf("%d%d",&n,&x);
    }while(n<=0);
    printf("gia tri cua tong sn la :%d",tinhtong(n,x));
    getch();
}
