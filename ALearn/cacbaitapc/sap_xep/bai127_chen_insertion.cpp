#include <iostream>
#include <fstream>
using namespace std;

void nhap (int *a, int n){
    ifstream doc;
    doc.open ("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", ios::in);
    for (int i=0; i<n; ++i)
        doc >> a[i];
    doc.close();

}
void xuat (int *a, int n){
    for (int i=0;  i<n; ++i){
        cout << a[i] << "\t";
    }
}

//sapxep chen
//dua so nho nhat len
//luc
// 1: Lặp lại từ arr [1] đến arr [n] trên mảng. 
// 2: So sánh phần tử hiện tại (khóa) với phần tử tiền nhiệm của nó. 
// 3: Nếu phần tử chính nhỏ hơn phần tử trước của nó, hãy so sánh nó với các phần tử trước đó. Di chuyển các phần tử lớn hơn lên một vị trí để tạo khoảng trống cho phần tử được hoán đổi.



// void swap (int *a, int *b){
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }
// void sapxep_chen (int *a, int n){
//     for (int i=1; i<n; ++i)
//         for (int j=0; j<i; ++j)
//             if (a[i]<a[j])
//                 swap ( &a[i], &a[j]);    
// }


// void sapxep_chen (int *a, int n){
//     int temp,j;
//     for (int i=1; i<n; ++i){
//         j=i-1;
//         temp = a[i];
//         while (j>=0 && a[j]>temp){
//             a[j+1]=a[j];
//             j = j-1;
//         }
//         a[j+1]=temp;//t=2
//     }// 2 3 4 6 9
// }


//sap xep chen de quy


void sapxep_chen_dequy(int *arr, int n){
    if (n<=1) return;

    sapxep_chen_dequy (arr, n-1);
    
    int temp=arr[n-1];
    int j=n-2;
    while (j >= 0 && arr[j] > temp)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}

int main(){
    ifstream doc;
    int *a, n=0, temp;
    doc.open ("D:\\Hoc_tap\\cacbaitapc\\basic\\1000 bai code\\bai122_\\bai122_text.txt", ios::in);

    if (doc.fail()){
        cout << "file bij loi";
        system ("pause");
        return 1;
    }

    while (doc>>temp) n++;
    doc.close();

    a = new int [n];


    nhap (a, n);
    xuat (a, n);
    cout << "\nsau khi sap xeo \n";
   sapxep_chen_dequy (a,n);
    xuat (a, n);
    delete []a;
    system("pause");
    return 0;
}