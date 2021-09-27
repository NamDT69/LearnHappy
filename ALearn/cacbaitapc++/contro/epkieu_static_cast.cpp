#include <iostream>

using namespace std;

int main(){
    float a = 2.2; 
    int p = static_cast<int> (a);
    cout << p << "\t" << &a << "\t";
    int ab= 2;
    float *pp = (float*) (&ab);// double sag int dùng con trỏ dẫn đến mất dữ liệu
    cout << *pp << "\t" << *&ab;

}