#include <iostream>
using namespace std;
int main(){
    int *a ;
    a = new int[4]{1,2,3,4};
    a[4] = 7;
    // 24 byte trong vector là con trỏ begin, end, storge 
    // &a có 8 byte là địa chỉ của con trỏ trỏ đến các địa trong hệ điều hành 64 bit nên phải yêu cầu 8byte
    cout << a << " "<<&a + 1 << " " << &a << " " << a+ 1 << " " << a + 2 << " " << a + 3 << " " << a + 4<< " " << a + 5<< " " << a + 6 << " "<< a + 7<< " "<< a + 8 << " ";
    cout << endl << sizeof(a + 1);
}