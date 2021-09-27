#include <iostream>

void countSort(int a[], int n){
    //init all element = 0
    int *b = new int [10];
    for (int i = 0; i < n; i++){
        b[a[i]]++;
    }
    // bản chất của việc cộng là lấy khoảng cách ở phần tử thứ 2 cách bao nhiêu phần tử số 1 
    for (int i = 0; i < 9; i++){
        b[i + 1] = b[i] + b[i + 1];
    }
    int c[b[9]];
    for (int i = 0 ; i < n; i++){
        c[b[a[i]]]  = a[i];
        b[a[i]] --;
    }
    int n2 = sizeof(c) / sizeof(int);
    for(int i = 1; i <= n2 ; i++){
        std::cout << c[i] << std::endl;
    }
    delete []b;
}
int main(){
    int a[] = {2,3,5,2,3,4,5,6};
    // 0 1 2 3 4 5 6 7 8 9
    // 0 0 2 2 1 2 1 0 0 0 
    // 0 0 2 4 5 7 8 8 8 8 
    // 
    int n = sizeof(a) / sizeof(int);
    countSort(a, n);
    // std::cout << std::endl << n;
    return 0;
}