#include <iostream>

template <typename T>
class Solution{
    public:
    void shellSort(T *a, int n);
};

template <typename T>
void Solution<T>::shellSort(T *a, int n){
    for (int gap = n  / 2; gap > 0; gap /= 2){
        for (int i = gap ; i < n; i++){
            T t = a[i];
            int j;
            for (j = i; a[i] < a[j - gap] && j >= gap; j -= gap){
                a[j] = a[j - gap];
            }
            a[j] = t;
        }
    }
}

int main(){
    int n = 4;
    int a[n] = {34,5,23,12};
    Solution<int> b;
    b.shellSort(a, n);
    for (int i = 0; i < n; i++){
        std::cout << a[i] << "   ";
    }
}
