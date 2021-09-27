//Bài 63: Cho 2 số nguyên dương a và b. Hãy tìm bội chung nhỏ nhất của 2 số này
#include <conio.h>
#include <stdio.h>
#include <cmath>
#define vonglap(i,x) for(int i=2;i<=x/2;i++)//vong lăpj sử dụng define
#define uocso(s,n,i) if(n%i==0) s++// nếu đúng thì xuất ra
int kiemtrasnt(unsigned int n){//kiem tra so nguyen to
    int s=0;
    vonglap(i,n)
    uocso(s,n,i);
    return s;
}
int bcnn(unsigned int a,unsigned int b){
    int n=2 ;
    int s=1;
    while(a/n>=1||b/n>=1){
        if(kiemtrasnt(n)==0){
            int t=1;
            int k=1;
            int d=pow(n,k);
            while(a%d==0||b%d==0){
                t*=n;
                k++; d=pow(n,k);
            }
            s*=t;
        }
        n++;
    }
    return s;
}
int main(){
     unsigned int a,b;
    do{
        printf("enter two positive innteger a,b:");
        scanf("%u%u",&a,&b);
    }while(a<0&&b<0);
    printf("bcnn a va b la :%d",bcnn(a,b));
    getch();
}