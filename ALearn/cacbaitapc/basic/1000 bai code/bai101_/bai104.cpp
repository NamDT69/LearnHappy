#include <stdio.h>
#include <conio.h>
int main(){
    unsigned int a,t,n,h,dem=0;
    M:do{
        printf("nhap ngay thang ,nam:");
        scanf("%d/%d/%d",&a,&t,&n);
        if(t==2){
            if((n%4==0||n%400==0)&&a>=30)  goto M;//neu nam nhuan lon hon 29 ngay yeu cau nhap lai
            else if (n%4!=0&&n%400!=0&&a>=29) goto M;//neu nam ko nhuan thang 2 lon hon 28 ngay yeu cau nhap lai
        }else if(t==4||t==6||t==9||t==11&&a>30) goto M;//neu thang 4,6,9,11 lon hon 30 ngay yeu cau nhaplai
    }while(t>12||t==0||a==0||a>31||n==0);//cac thang con lai co hon 31 ngay ,thang ngay nam =0 thi nhap lai

    for(int i=1;i<=t;i++){
        if(i==4||i==6||i==9||i==11) h=30;
        else if(i==2){
            if(n%4==0||n%400==0) h=29;
            else h=28;
        }else h=31;
        for(int j=1;j<=h;j++){
            if(i==t&&j==a) break;
            dem++;
        }
    }
     printf("day la ngay thu %d",dem);
    getch();
} 