#include <stdio.h>
#include <conio.h>

int uocso(int a,int b){
    if(a%b==0) return b;
    return uocso(b,a%b);
}

int uocso2(int a,int b){
    int n;
    if(a<b)  return uocso2(b,a);
    n=a%b;
    if(n==0) return b;
    return uocso(b,n);
}
int main(){
    int a,b;
    do{
        printf("nhap a,b:");
        scanf("%d%d",&a,&b);
    }while(a<0||b<0);
    printf("uoc chung lon nhat cua hai so a , b la :%d",uocso2(a,b));
    getch();
}