#include <iostream>
#include <vector>
int main(){
    std::vector <int> arr = {3,42,2,4};
    int n = arr.size();
    int h, jj;
    for(int i = 1; i < n; ++i){
        h = arr[i];
        jj = i - 1;
        //chèn vào mảng đã được sort
        while(h < arr[jj] && jj >= 0){
            arr[jj + 1] = arr[jj];
            jj--;
        }
        arr[jj + 1] = h;

    }
    for (int i = 0; i < n; ++i){
        std::cout << arr[i] << "\t" ;
    }
    return 0;
}