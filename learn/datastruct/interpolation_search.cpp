#include <iostream>
using namespace std;
int noi_suy(int a[], int n, int k){
    int l = 0;
    int r = n -1;
    int pos;
    while (l <= r && a[l] <= k && a[r] >= k){
        if (l == r || a[l] == a[r]){
            if (a[l] == k)
                return l;
            return -1;
        }
        pos = l +((k - a[l]) * (r - l) / (a[r] - a[l]));
        if ( a[pos] == k){
            if (a[pos - 1] == k){
                return pos -1;
            }
            return pos;
        }
        if (a[pos] < k){
            l = pos + 1;
        }else{
            r = pos - 1;
        }
    }
    return -1;
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
    cout << noi_suy(a, n, k);
    return 0;
}