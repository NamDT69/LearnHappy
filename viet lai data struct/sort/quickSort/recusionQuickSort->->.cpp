#include <iostream>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 2 anh em chạy cùng chiều 
int pivot(int a[], int l, int r){
    int j = l;
    int pivot = r;

    for (int i = l; i < r; ++i){
        if(a[pivot] > a[i]){
            swap(&a[i], &a[j]);
            ++j;
        }
    }
    swap(&a[j], &a[pivot]);
    return j;
}
//  thêm bộ nhớ log n
void quickSort(int a[], int l, int r){
    if (l < r){
        int m = pivot(a, l, r);
        quickSort(a, l, m - 1);
        quickSort(a, m + 1, r);
    }
}

int main(){
    int a[] = {4,2,5,2,6,3,6,4,3,2};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; ++i){
        std::cout << a[i] << "\t" ;
    }
    return 0;
}