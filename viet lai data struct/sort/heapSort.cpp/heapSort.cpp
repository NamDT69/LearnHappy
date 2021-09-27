#include <iostream>


void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void maxHeapSort(int a[], int m, int n){
    int l = m * 2 + 1;
    int r = m * 2 + 2;
    int k = m;
    if (a[k]  < a[l] && l < n)
        k = l;
    if (a[k] < a[r]  && r < n)
        k = r;
    if (m != k){
        swap(&a[k], &a[m]);
        maxHeapSort(a, k, n);
    }
}
void heapSort(int a[], int n){
    int k = n / 2 - 1;
    // tạo 1 cây nhị phân 
    for (k ; k >= 0; --k){
        maxHeapSort(a, k, n);
    }
    for (int i = n - 1; i >= 0; --i){
        swap(&a[i], &a[0]);
        maxHeapSort(a,  0, i);
    }
}
int main(){
    int a[] = {4,2,5,2,6,3,6,4,3,2};
    int n = sizeof(a) / sizeof(a[0]);
    heapSort(a, n);
    for (int i = 0; i < n; ++i){
        std::cout << a[i] << "\t" ;
    }    
    return 0;
}