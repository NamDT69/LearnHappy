////75. Kiểm tra số nguyên 4 byte có dạng 2mu(k) � hay không?
#include <conio.h>
#include <stdio.h>

int dequy(int n,int k){
    ++k;
    if(n==2) return k;
    if(n%2==0) return dequy(n/2,k);
    else return 0;
}

int main(){
    int n,k=0;
    do{
        printf("nhap so n:");
        scanf("%d",&n);
    }while(n<0);
    if(dequy(n,k)==0&&n!=1) printf("n ko co dang 2 mu k");
    else printf("n co dang 2 mu %d",dequy(n,k));

    getch();

}