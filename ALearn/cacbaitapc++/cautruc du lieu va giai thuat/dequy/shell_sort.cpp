#include <iostream>
#include <vector>
using namespace std;
void nhap(int a[], int n){
   
    for (int i = 0; i < n; i++){
       cin >> a[i];
    }
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void shell_sort(int a[], int n){
    for (int gap = n / 2; gap > 0; gap /= 2){
        for (int i = gap ; i < n; i ++ ){
            int j = i;
            while (j - gap >= 0 && a[j - gap] > a[j]){
                swap (&a[j - gap], &a[j]);
               
                    j = j - gap;
            }
        }
    }

}
void xuat(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int a[10001];
    nhap(a, n);
    shell_sort(a, n);
    xuat(a, n);

    return 0;
}