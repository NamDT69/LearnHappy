#include  <iostream>
using namespace std;
int main()
{
	int n;
    float f;
    double d;

    void *ptr;
    ptr = &n; // ok
    cout << ptr << endl;

    ptr = &f; // ok

    cout << ptr << endl;

    ptr = &d; // ok
    cout << ptr << endl;
	// con trỏ void trỏ  đến vùng nhớ , ko  lấy được dereferen ( hay giá trị của địa chỉ )
	// nó dùng phải ép kiểu , dùng như template hay nạp chồng 
    return 0;
} 