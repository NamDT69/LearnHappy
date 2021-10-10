#include <iostream>
using namespace std;

void chuoidai(int a[], int n){
    int l[n];
    l[0] = 1;
    int lmax = 0;
    int max = 1, vt = 0;
    for (int i = 1; i < n; i++){
        lmax = 0;
        for (int j = 0; j < i; j++){
            if (a[i] > a[j] && lmax < l[j]){
                lmax  = l[j];
            }
        }
        l[i] = lmax + 1;
        if (max < l[i]){
            max = l[i];
            vt = i;
        }
    }
    // cout << max;
    int h[n];
    int j = 0;
    for (int i = vt ; i >= 0; i --){
        if(max == l[i]){
           h[j] = a[i]; 
           max --;
           j ++;
        }  
        if (max == 0){
            break;
        }
    }
    for (int i= j -1 ; i >=0; i--){

        cout << h[i] << " ";
    }
}
int main(){
    int n;
    cin >>  n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


     chuoidai(a, n);
    return 0;
}