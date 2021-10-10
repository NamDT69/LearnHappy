//75. Kiểm tra số nguyên 4 byte có dạng 2mu(k) � hay không?
#include <stdio.h>
#include <conio.h>

int main(){
    int n,k=0 ;
    int p=1;
    do{
        printf("nhap so n:");
        scanf("%d",&n);
    }while(n<0);
    while(p<n){
        p*=2;
        ++k;
    }
    if(p==n) printf("n co dang 2 mu %d",k);
    else printf("n ko co dang 2 mu k");
    

    getch();
}