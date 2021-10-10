#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int a, int b){
    return a + b;
}
// * ** điểm lưa ý 
int* sum2(int a, int b){
    int c = a + b;// khi thoát khoir ham c sẽ bị xóa đi
    int *v = &c;// nếu return về địa chỉ của c luôn thì khi tror tới địa chỉ sẽ ko tìm thấy biến chưas địa chỉ đó  vì đã bị xóa rồi 
    // return &c ko được vì c sẽ bị xóa khi thoát khỏi function
    return v;
}

int &sum3(int &a, int &b){
    return (a > b ? a: b) ;
}
int& add(int x, int y)
{
        int value = x + y;
        return value; // trả về tham chiếu của biến value//= vùng nhớ rác 
} // biến value bị hủy khi ra khỏi hàm// 
int main(){
    int number = 5;
    cout << sizeof(number) << endl;
    int &reference = number;

    reference = 10; //change value of number variable through its reference
    cout << number << endl;
    cout << &number << endl;
    cout << &reference + 1 << endl;// địa chỉ sẽ là cái đầu tiên của vùng nhớ 
    cout << sizeof(reference) << endl;//có 4 ô địa chỉ trong vùng nhớ 
    int f = sum(1,2);
    cout << &f << endl;
    int *x = sum2(3,4);
    cout << *x << endl;



    int x = 0;
    int &r = x;// tham chiếu ko tạo ra 1 vùng nhớ mới  mà là vô hình
    int *p = &x; // con trỏ p sẽ tạo ra 1 vufg nhớ mới 
    int *p2 = &r;

    assert(p == p2); // &x == &r
    assert(&p != &p2);

    // Một con trỏ có thể được gán nullptr, trong khi một tham chiếu phải được liên kết với một đối tượng hiện có.
    //  Nếu bạn cố gắng đủ, bạn có thể liên kết một tham chiếu đến nullptr, nhưng điều này không được xác định và sẽ không hoạt động nhất quán.

    // sử dụng hàm trả về địa chỉ hay tham chiếu thì trả về parameter truyênf vào là tham chiếu hoặc con trỏ 
    

    // tạo ra một tham chiếu đến địa chỉ đầu tiên của vùng nhớ chứa 12
    //const ko thể thay đổi x , trog struct ko thể thay đổi các property 
     const int &x = int(12); 


}