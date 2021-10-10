#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void nhap (int *a, int n, FILE *doc){
    for (int i=0; i<n; ++i)
        fscanf (doc, "%d", &a[i]);
}

void xuat (int *a, int n){
    for (int i=0;  i<n; ++i)
        printf ("%d\t", a[i]);
}

void swap (int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void bong_bong_de_quy (int *a, int n){
    if (n==1) return;
// Trường hợp cơ sở: Nếu kích thước mảng là 1, trả về.
// Thực hiện một lần của Sắp xếp bong bóng bình thường. Vượt qua này sửa chữa phần tử cuối cùng của mảng con hiện tại.
// Định kỳ cho tất cả các phần tử ngoại trừ cuối cùng của mảng con hiện tại.
    for (int i=0; i<n-1; ++i){
        if ( a[i]>a[i+1] )
            swap (&a[i],&a[i+1]);
    }
    return bong_bong_de_quy(a, n-1);
}

int main(){
    FILE *doc;
    int *a, n=0, temp;
    doc = fopen ("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", "r");
    if (!doc){
        printf ("loi roi!");
        getch();
        exit(1);
    }
    while (fscanf(doc, "%d", &temp)>0) n++;
    fseek (doc, 0, SEEK_SET);
    a = (int*) malloc ( n*sizeof(int) );
    nhap (a, n, doc);
    printf ("trc khi sap xep: ");
    xuat (a, n);
    printf ("\nsau khi sap xep:");
    bong_bong_de_quy (a, n);
    xuat (a, n);


    fclose(doc);
    free(a);
    getch();

}