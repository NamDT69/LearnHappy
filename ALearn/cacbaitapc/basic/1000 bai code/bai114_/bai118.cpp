#include <stdio.h>
#include <conio.h>
#include <math.h>

void nguyento(int n){
    int dem;
   for(int i=2;i<=n;i++){
       dem=0;
       for(int j=1;j<=i/2;j++)
            if(i%j==0) dem++;
        if(dem==1) printf("%d\t",i); 
   }
}
int main(){
    int n;
    do{
        printf("nhap n:");
        scanf("%d",&n);
    }while(n<=0);
    printf("cac so nguyen to trc n la : ");
    nguyento(n);
    getch();
}
