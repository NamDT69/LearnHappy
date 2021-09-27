//Bài 62: Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số này.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int ucln(unsigned int a,unsigned int b){ 
    if(a%b==0) return b;
    if(b%a==0) return a;
    int ucln=1;
    if(a<b){
        for(int i=2;i<=a/2;i++)
            if(a%i==0&&b%i==0)
                ucln=i;
    }else{
        for(int i=2;i<=b/2;i++)
            if(a%i==0&&b%i==0)
                ucln=i;
    }
    return ucln;
}
int main(){
    unsigned int a,b;
    do{
        printf("enter two positive innteger a,b:");
        scanf("%u%u",&a,&b);
    }while(a<0&&b<0);
    printf("ucln a va b la :%d",ucln(a,b));
    getch();
}