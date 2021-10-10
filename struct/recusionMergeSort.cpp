#include <iostream>


void merge(int a[], int l, int r){
    int m = (l + r) / 2;
    int i = l;
    int j = m + 1;
    int x = 0;
    //thêm bộ nhớ log(n)
    int *b = new int[r - l + 1];
    while (i <= m && j <= r){
        if (a[i] < a[j]){
            b[x] = a[i];
            ++i;
        }else{
            b[x] = a[j];
            ++j;
        }
        ++x;
    }
    while (j <= r){
        b[x] = a[j];
        ++x;
        ++j;
    }
    while (i <= m){
        b[x] = a[i];
        ++x;
        ++i;
    }
    i = l;
    j = 0;
    for (i; i <= r; ++i){
        a[i] = b[j];
        ++j;
    }     
    delete []b;
}
// thêm bộ nhớ log(n)
void mergeSort(int a[], int l, int r){
    if (l < r){
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, r);
    }
}
int main(){

    int a[] = {4,2,5,2,6,3,6,4,3,2};
    int n = sizeof(a) / sizeof(a[0]);
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; ++i){
        std::cout << a[i] << "\t" ;
    }
    return 0;
}