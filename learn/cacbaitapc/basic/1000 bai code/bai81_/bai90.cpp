#include <stdio.h>
#include <conio.h>
int main(){
    int n,i=0,s=0;
    do {
        printf("nhap n:");
        scanf("%d",&n);
    }while(n<1);
    while(s<n){
        i++;
        s+=i;
    }
    printf("gia tri cua m la :%d",i-1);
    getch();
}