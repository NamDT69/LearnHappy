// Khoa an toàn thông tin - Học viện Kỹ thuật Mật mã
// Dynamic Persistent Memory Allocation - Rewrite the
// function Reverse
#include <iostream>
#include<stdio.h>
using namespace std;
//const 1 ko cho  pheps gan các phần tử sang 1 phần  tử mới và ko cho phép trả về  , const 2 ko cho phép gán list sang 1 địa chỉ mảng mới hay một cái gì đó
//const int  *list, hay các địa bên trong mảng // ko thể thay đổi các phần tử  // int tạo ra *list hay đang tạo tới list[0]
int* reverse(const int* const list, int size){
    int *result = new int[6];
    for (int i = 0, j = size - 1; i < size; i++, j--){
        result[j] = list[i];
    }
    // khi  tra ve phai tra một mảng có bộ nhớ liên tục
    return result;
}
void printArray(const int* list, int size){
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}
int main(){
    int list[] = {1, 2, 3, 4, 5, 6};
    int* q = reverse(list, 6);
    printArray(q, 6);
      char ca1[]= "aaaa"; // char array 1
  char ca2[10]= "bbbb"; // char array 2
 //toán tử address-of trả về kiểu con trỏ
    // nghĩa là địa chỉ trả về địa chỉ kiểu char
  char *pca1= ca1;
  char *pca2= ca2;
    char const *ccs= ca1;
  char * const csc= ca2;
  // địa chỉ này chứa cái char
    cout << endl << "char:" << &pca1 << endl;
    // địa chỉ trên của mảng char la char
    cout << endl << "char:" << pca1 << endl;
 // aaaa nó có sẵn địa chỉ trên vùng nhớ ảo , lấy địa chỉ của nó
    cout << &("aaaa") << endl;
    //char *d = &("aaaa"); koo được ???
    // cout << " " << *d;
    for (int i = 0; i < 9; i++){
        // Như vậy, mỗi chuỗi hằng kí tự có nội dung khác nhau sẽ có một địa chỉ khác nhau.
        //  Chúng ta có thể sử dụng nội dung của chuỗi hằng kí tự này như mảng một chiều, nhưng không thể thay đổi nội dung của nó.
        cout << "Le Tran Dat"[i];
    }
    cout << endl ;

//this line will make an error
    
     
    return 0;
}