#include <stdio.h>
#include <conio.h>

void xuat(int a[], int n){
    for (int i = 0; i < n; ++i){
        printf ("%d \t ", a[i]);
    }
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int vachngan(int a[], int left, int right){
    int i = left -1;
    
    int temp = a[right];
    for (int j = left; j < right -1; j++){
        if (a[j] < temp){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[right]);
    return i+1;
}
void quick_sort(int a[], int left, int right){
    if (left < right){
        int i = vachngan(a, left, right);
        quick_sort (a, left, i-1);
        quick_sort (a, i+1, right);
    }
}
int main(){
    int a[] = {4,4,5,3,2,5,7,3};
    int n = sizeof(a) / sizeof(int);
    xuat(a, n);
    quick_sort (a, 0, n-1);
    printf("\nsau khi sap xep \n");
    xuat(a, n);

    getch();
    return 0;
}