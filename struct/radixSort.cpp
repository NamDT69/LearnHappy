#include <iostream>

int getMax(int a[], int n){
    int t = a[0];
    for (int i = 1; i < n; i++){
        if (t < a[i]){
            t = a[i];
        }
    }
    return t;
}

void  countSort(int a[], int n, int ex){
    int *b = new int[10] {0};

    for (int i = 0; i < n; i++){
        b[(a[i] / ex) % 10] ++;
    }

    for (int i = 0; i < 9; i++){
        b[i + 1] = b[i] + b[i + 1];
    }
    int *c = new int[n];

    // chú ý chỗ  này nếu chạy 0 đến max , phần tử sẽ ko stable vì lấy phần tử đầu tiên thì sẽ ở vị trí lớn nhất ở vị trí trùng đó , 
    for(int i = n - 1; i >= 0; i--){
        c[b[(a[i] / ex) % 10] - 1] = a[i];
        b[(a[i] / ex) % 10] --;
    }

    for (int i = 0; i < n; i++){
        a[i] = c[i];
    }
    
    delete []b;
    delete []c;
}

void radixSort(int a[], int n){
    int center = getMax(a, n);
    for (int i = 1; center / i > 0; i *= 10){
        countSort(a, n, i);
    }
}
int main(){
    int a[]  = {432,84,5623,461,5633};
    int n = sizeof(a) / sizeof(int) ;
    radixSort(a, n);
    for (int i = 0; i < n; i++){
        std::cout << a[i] << " ";
    }
    return 0;
}