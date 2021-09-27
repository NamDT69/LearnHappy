#include <iostream>

using namespace std;
int fibonacci(int n, int *a){
    if (a[n] > 0) return a[n];
    a[n] = fibonacci(n - 1, a) + fibonacci(n - 2, a);
}
int main(){
    int n;
    cin >> n;
    int *a = new int [n];
    a[0] = 1;
    a[1] = 1;
    cout << fibonacci(n - 1, a);

    return 0;
}