#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    do {
        printf("nhap n:");
        scanf("%d",&n);
    }while(n<1);
    for(int i=2;i<=n/2;i++) 
        if(n%i==0){
            printf("day ko phai la so nguyen to");
            n=0;
            break;
        }
    if(n!=0) printf ("day la so nguyen to");
    getch();
}