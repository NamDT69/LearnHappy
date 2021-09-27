#include <stdio.h>
#include <conio.h>

int main(){
    int a=4;
    float b=(float)a+3;// ép kiểu về float
    printf("ep kieu nay,%f",b);
    

    int x;
    printf("\n nhap gia tri x=");
    scanf("%d",&x);//nhập giá trị
    long long int c=(long long int)x+4;// ép kiểu về long long int
    printf("\ngia tri cua c =%lli",c);
    getch();
}