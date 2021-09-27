#pragma one
#include <iostream>

template <class T>
class Sort{
private:
public:

    void sort(T *a, int l, int r, int k){
        if (l < r){
            T pivot = a[l];
            int i = l;
            int j = r;
            if (k == 1)    
                while (i != j){
                        while (a[j] >= pivot && i < j){
                            j--;
                        }
                        a[i] = a[j];  
                        while (a[i] <= pivot && i < j){
                            i ++;
                        }
                        a[j] = a[i];
                }
            else if (k == 0)
                while (i != j){
                        while (a[j] <= pivot && i < j){
                            j--;
                        }
                        a[i] = a[j];  
                        while (a[i] >= pivot && i < j){
                            i ++;
                        }
                        a[j] = a[i];
                }
            
            a[i]= pivot; 
            
                sort(a, l, i - 1 , k);
                sort(a, i + 1, r, k);
        }    
    }
};
