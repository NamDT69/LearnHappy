// Sử dụng con trỏ trong C++, bạn hãy viết một chương trình C++ để nhận dữ liệu từ người dùng và tìm giá trị lớn nhất của một tập dữ liệu nội bộ.
#include <iostream>

int* max(int* const arr, int n){
    int* max  = arr;
    for (int i = 1; i < n; i ++){
        if(*max < arr[i]){
            max = &arr[i];
        }
    }
    return max;
}
int main(){
  
    int a[5];
    int* p = a; 
    std::cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
    for (int i = 4; i >=  0; i--){
        std::cout << *(p + i);
    }
    return 0;
}