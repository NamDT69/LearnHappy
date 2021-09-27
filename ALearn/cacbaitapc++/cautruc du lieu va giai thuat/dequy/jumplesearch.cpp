#include <iostream>
#include <math.h>
using namespace std;
int searchtt(int a[], int l, int r, int k){//tim kien tuyen
    for (int i = l; i <= r; i++){
        if(a[i] == k)
            return i;
    }
    return -1;
}
int jumpsearch(int a[], int n, int k){
    int step = sqrt(n);
    int i;
    for (i = 0; i < n; i += step){
        if (a[i] == k)
            return i;
        if ( a[i] > k){
            return searchtt(a, i - step, i,k);
        }
    }
    if (i >= n){
        return searchtt(a, i - step, n - 1, k);
    }
}
int main(){
    int n;
    cin >> n;
    int a[1001];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << "\n vi tri :" << jumpsearch(a, n, k);

    return 0;
}