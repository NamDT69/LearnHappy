#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void nhapmang(FILE *ptr,float *a,int n){
    for(int i=0;i<n;i++){
        fscanf(ptr,"%f",&a[i]);
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
    
    float *arr,h;
    int n=0;
    
   FILE *ptr;
    ptr= fopen("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt","r");
    
   
    if(ptr==NULL){
        printf("file bi loi");
        exit(1);
    }


     while (fscanf(ptr, "%d", &h) > 0)
        n++;
  //  printf("%d",n);
  arr=(float*) malloc(n*sizeof(float));
    fseek(ptr,0,SEEK_SET);
    nhapmang(ptr,arr,n);
    xuatmag(arr,n);
     printf("\ngia tri lon nhat cua mang la :%f",timkiem_max(arr,n));
     fclose(ptr);
     free(arr);
    getch();
}