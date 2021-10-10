#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void nhap( FILE *tro, int *a, int n){
    for(int i=0; i<n; i++)
        fscanf(tro, "%d", &a[i]);
}

void xuat(int *a, int n){
    for(int i=0; i<n; ++i){
        printf("%d\t",a[i]);
    }
}


void kiemtra(int *a, int n){
    for(int i=0; i<n; i++)
        if(a[i]%2==0 && a[i]<=2400)
            printf("%d\t", a[i]); 
}


int main(){
    int n=0, *a, b;
    FILE *ghi;
    ghi = fopen("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", "r");
    
    if(ghi==NULL){
        printf("file bi loi");
        getch();
        exit(1);
        
    }
    
    while(fscanf(ghi, "%d", &b)>0) 
        n++;
    
    a = (int*) malloc( n*sizeof(int) );
    fseek(ghi, 0, SEEK_SET);
    nhap(ghi, a, n);
   // xuat(a, n);
    printf("day la cac so chan duoi 2004 trong mang:");
    kiemtra(a, n);
    fclose(ghi);


    getch();
}