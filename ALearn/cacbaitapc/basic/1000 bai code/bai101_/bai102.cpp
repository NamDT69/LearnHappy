#include <stdio.h>
#include <conio.h>
int main(){
    unsigned int a,t,n;
    M:do{
        printf("nhap ngay thang ,nam:");
        scanf("%d/%d/%d",&a,&t,&n);
        if(t==2){
            if((n%4==0||n%400==0)&&a>=30)  goto M;//neu nam nhuan lon hon 29 ngay yeu cau nhap lai
            else if (n%4!=0&&n%400!=0&&a>=29) goto M;//neu nam ko nhuan thang 2 lon hon 28 ngay yeu cau nhap lai
        }else if(t==4||t==6||t==9||t==11&&a>30) goto M;//neu thang 4,6,9,11 lon hon 30 ngay yeu cau nhaplai
    }while(t>12||t==0||a==0||a>31||n==0);//cac thang con lai co hon 31 ngay ,thang ngay nam =0 thi nhap lai

    a+=1;// cong them 1 ngay
    if(a==32) {
        a=1;
        t+=1 ;
        if(t>12){//31/12 thi chuyen thah thang 1
            t=1;
            n+=1;
        }
    }
    else if(t==2){
        if((n%4==0||n%400==0)&&a==30) {
            a=1;
            t+=1;
        }
        else if (n%4!=0&&n%400!=0&&a==29) {
            a=1;
            t+=1;
        }
    }
    else if(t==4||t==6||t==9||t==11&&a==31){
        a=1;
        t+=1;
    }
    
    printf("ngay tiep theo la : %d/%d/%d",a,t,n);
    getch();
} 