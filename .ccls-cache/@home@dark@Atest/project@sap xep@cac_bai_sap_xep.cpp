#include <iostream>
#include "sap_xep.h"

template <class T>
class TypeSort: public Sort <T>{
public:
    void sortUpAcending(T *a, int n){
        this->sort(a, 0, n - 1, 1);   
    }
    void sortUpAcendingAbs(T *a, int n){
        for (int i = 0; i < n; i++){
            a[i] = std::abs(a[i]);
            this->sort(a, 0, n - 1, 1);   
        }
    }
    void sortEvenIntegersAscending(T *a, int n){
        this->sort(a, 0, n - 1, 1); 
        for (int i = 0; i < n - 1; i++){
            if (a[i] % 2 == 1)
                for (int j = i; j < n; j++){
                    if (a[j] % 2  == 1 && a[j] > a[i]){
                        int t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
                }
        }
    }
    void sortUpPositive(T *a, int n){
        this->sort(a, 0, n - 1, 1); 
        int i;
        for (i = 0; i < n; i ++){
            if (a[i] >= 0){
                break;
            }
        } 
        this->sort(a, 0, i - 1, 0); 
    }
};
int main(){
    TypeSort<int> v;
     int a[] = {4235,-32,-54,246,2,346,45,-6,2456,-4572,-46,45,754,6,346};
     int n = sizeof(a) / sizeof(int);
     v.sortUpPositive(a, n);
     for (int i= 0; i < n; i++){
          std::cout << a[i] << "   ";
     }
    return 0;
}
