#include <iostream>
using namespace std;
int fibonaci(int n, int a[]){
    if(a[n] > 0) return a[n];
    // quy hoach dong dung de lua lai gia tri
    a[n] = fibonaci(n -  1, a) + fibonaci(n - 2, a);
  
}
int main(){
    int n;
    cin >> n;
    int a[n + 1];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n + 1; i++){
        a[i] = 0;
    }
    cout << fibonaci(n, a);
    return 0;
}