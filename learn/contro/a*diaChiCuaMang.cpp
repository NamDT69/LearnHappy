#include <iostream>

using namespace std;
int main(){
    int a[]= {1,2,3};
    // b gán bằng địa chỉ của a // rồi rắc rối vãi // nếu b = &b sẽ như nào  . tại sao lại không được ******************** cần tìm hiểu 
    int *b = a;
    // a[1] chỉ là cái variable 
    a[1]= 9;
    // a lưa các địa chỉ của a[1], a[2], a[3] //giống kiểu con trỏ của con trỏ : vd ox2 = {0x2, 0x3, ox4} nhưng như thế  này a[] = {1,2,3}
    cout << *(*(&a)+ 1) << "hay" << *(a + 1) << "hay" << *(&a[0] + 1); 
    // địa chỉ lưa maảng bằng với địa chỉ đầu phần tử của mảng == bằng với giá trị của mảng  << dịa chi = giá trị , đau đầu phết chứ đùa 
    cout << endl << "dia chi cua a: " << &a << " " << a << endl;
    cout << endl << "dia chi cua a[0]: " << &a[0]<< " " << &a[1] << endl;
    // cái (&a) + 1 là địa chỉ lưa mảng + 1 là bỏ qua phần tử của mảng//  địa chỉ &a + 1 cách số byte của all phần tử 
    cout << endl << "dia chi cua &a + 1: " << (&a) + 1 << " " << (*&a) + 1 << endl;
    cout << endl << "dia chi cua a: " << (&a[0]) + 1 << " " << a + 1 << endl;
    return 0;
}