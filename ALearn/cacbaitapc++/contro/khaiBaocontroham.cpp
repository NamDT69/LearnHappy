#include  <iostream>
using namespace std;
int sum2(int a, int b){
    return a +b;
}
int sum(int a, int b){
    return a +b;
}
int sum3(int a, int b){
    return a +b;
}
int main(){
    // khai báo con trỏ hàm cần dấu ngoặc // nếu ko có là khai báo con trỏ số 
    int (*p)(int, int);
    // p = code của sum , giống như con trỏ hàm 
    p = &sum;
    cout << p;

    return  0;
}