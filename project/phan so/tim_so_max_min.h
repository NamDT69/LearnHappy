#pragma one
#include <iostream>

template <typename T> 
T min(T *a, T *b){
    return (*a > *b ? *b : *a);
}

template <typename T> 
T max(T *a, T *b){
    return (*a < *b ? *b : *a);
}

template <typename T> 
T mina(T *a , int n){
    int min = a[0];
    for  (int i = 0; i < n; i++){
        if (min > a[i]){
            min == a[i];
        }
    }
    return min;
}

template <typename T> 
T maxa(T *a , int n){
    int max = a[0];
    for  (int i = 0; i < n; i++){
        if (max < a[i]){
            max == a[i];
        }
    }
    return max;
}

template <typename T>
void sort(T *a, int n){
    for (int gap = n / 2; gap > 0; gap /= 2){
        for (int i = gap ; i < n; i++){
            T temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > a[i]; j -= gap){
                a[j] = a[j - gap];
            }
            a[j] = temp;
        }
    }
}