#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x,n,d;
    double sum=0;
    do{
        cout<<"nhap x,n:";
        cin>>x>>n;
    }while(n<=0);
    for(int i=1;i<=n;i++){
        d=0;
        for(int j=1;j<=i;j++) d+=j;
        sum+=(pow(x,i)/d);
    }
    cout<<"tong cua s(x,n) ="<<sum;
    system("pause");
    return 0;
}