#include <stdio.h>
#include <conio.h>
int main(){
    unsigned int t,n;
    do{
        printf("nhap thang ,nam:");
        scanf("%d%d",&t,&n);
    }while(t>12||t==0);
    if(t==1||t==3||t==5||t==7||t==8||t==10||t==12) printf("thang nay co 31 ngay");
    else if(t==2){
        if(n%4==0||n%400==0) printf("thang nay co 29 ngay");
        else  printf("thang nay co 28 ngay");
    }else printf("thang nay co 30 ngay");
    getch();
} 