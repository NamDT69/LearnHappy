#include <stdio.h>
#include <conio.h>
#include <math.h>

int tinhtong(int n){
    if(n==1) return 1;
    return n+tinhtong(n-1);
}
int main(){
    int n;
    do{
        printf("nhap n:");
        scanf("%d",&n);
    }while(n<=0);
    printf("gia tri cua tong sn la :%d",tinhtong(n));
    getch();
}
