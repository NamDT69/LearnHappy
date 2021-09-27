#include <iostream>
using namespace std;
void swap (int *a, int *b){
    *a = *a - *b;
    *b = *b + *a;
    *a = *b - *a;
}
void heap(int a[], int n, int i){
    int listder = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[listder])
        listder = l;
    if (r < n && a[r] > a[listder])
        listder = r;
    if (listder != i){
        swap (&a[listder], &a[i]);
        heap (a, n, listder);
    }
}
void heap_sort(int a[], int n){
    for ( int i = 2 * n -1; i >= 0; --i){
        heap (a, n, i);
    }
    for ( int i = n - 1; i > 0; --i){
        swap (&a[i], &a[0]);
        heap (a, i, 0);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main(){
    int a[] = {2, 4, 5, 8, 1, 4, 6};
    int n = sizeof(a) / sizeof(n);
    printArray(a, n);
    heap_sort(a, n);
    cout << "sau khi sort\n";
    printArray(a, n);

}