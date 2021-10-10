#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// sắp xếp lựa chọn( selection sort) tim phần tử nhỏ nhất đem lên đầu

void nhapmang (FILE *a, int *arr, int n){
    for (int i=0; i<n; ++i)
        fscanf (a, "%d", &arr[i]);
}

void swap (int *a, int *b){
    *a += *b;
    *b = *a-*b;
    *a = *a-*b;
}
void sapxep (int *a, int n){
    for (int i=0; i<n-1; ++i)//tong (n-i-2) i chay tu 0 den n-2

        for (int j=i+1; j<n; j++)// t=n-i-2

            if (a[j] < a[i])
                swap (&a[j], &a[i]);            
}

void xuat (int *arr, int n){
    for (int i=0; i<n; i++)
        printf ("%d\t", arr[i]);
}

int main(){
    FILE *a = fopen ("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", "r");
    int *arr, n=0, temp;
    if (!a){
        printf ("file bi loi");
        getch();  
    }

    while (fscanf (a, "%d", &temp)>0) n++;
    fseek (a, 0, SEEK_SET);
    arr = (int*) calloc(n, sizeof(int));
    nhapmang (a, arr, n);
    printf ("trc khi sawp xep");
    xuat (arr, n);

    printf ("sau khi sap xep");
    sapxep (arr, n);
    xuat (arr, n);

    fclose (a);
    free (arr);

    

    getch();
}