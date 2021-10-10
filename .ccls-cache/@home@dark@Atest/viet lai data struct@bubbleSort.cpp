#include <iostream>

int main(){
    int arr[] = {4,5,2,4,7,7,4,3,2,4,57,9,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    bool  h;
    for(int i = 0; i < n - 1; ++i){
        h = true;
        for (int j = 0; j < n - 1 - i; ++j){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                h = false;
            }
        }
        // nếu ko có cặp nào được swap thì thoát vòng lặp để giảm thời gian ;
        if (h){
            break;
        }
    }
    for (int i = 0; i < n; ++i){
        std::cout << arr[i] << "\t" ;
    }
    return 0;
}
