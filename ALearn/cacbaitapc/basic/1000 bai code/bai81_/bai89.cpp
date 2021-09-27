#include <stdio.h>
#include <conio.h>

int main(){
    int n,s=0;
    do{
        printf("nhap gia tri n:");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=1;i<=n;i+=2) s+=i;
    printf("gia tri cua s(n)  la :%d",s);
    getch();
}