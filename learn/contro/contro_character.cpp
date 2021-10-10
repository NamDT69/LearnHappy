// Khoa an toàn thông tin - Học viện Kỹ thuật Mật mã
// Dynamic Persistent Memory Allocation - Rewrite the
// function Reverse
#include <iostream>
using namespace std;
//const 1 ko cho  pheps gan các phần tử sang 1 phần  tử mới , const 2 ko cho phép gán list sang 1 địa chỉ mảng mới hay một cái gì đó
// int reverse(){
//     int a[3] = {1,2};
//     // return a;
// }
void printArray(const int* list, int size){
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}
int main(){
   int list[] = {1, 2, 3, 4, 5, 6};
    int* q = list;
    char a[111] = "yawf";
     char *b = a;
    float d = 4.21;
    float *e = &d;
    cout << &("yawf") << " hi "<< &a+1 << " haha " << &e;
    // cout << reverse()
    cout << endl << a[1] <<  " " << ((&a));

    return 0;
}