#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void nhapmang(float *a,int n){
    for(int i=0;i<n;i++){
        printf("\nnnhap a[%d]:",i);
        scanf("%f",&a[i]);
    }
}
void xuatmag(float *a,int n){
    for(int i=0;i<n;i++){
        printf(" \na[%d]:%f",i,a[i]);
    }
}
float timkiem_max(float *a,int n){
    float max=a[0];
     for(int i=1;i<n;i++)
        if(max<a[i]) max=a[i];
    return max;
}
int main(){
    int n;
    do{
        printf("nhap so phan tu:");
        scanf("%d",&n);
    }while(n<0);
    float *arr=(float*) malloc(n*sizeof(float));
    nhapmang(arr,n);
    xuatmag(arr,n);
    printf("gia tri lon nhatcua mang la :%f",timkiem_max(arr,n));
    free(arr);
    getch();
}