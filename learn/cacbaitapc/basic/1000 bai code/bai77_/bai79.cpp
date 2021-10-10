#include <iostream>
using namespace std;

int main(){
    int n,dem=0;
    do{
        cout<<"nhap mot so :";
        cin>>n;
    }while(n<0);
    for(int i=1;i<=n;i++) if(n%i==0) dem++;
    cout<<"so luonng so nguyen duonng la :"<<dem;
    system("pause");
    return 0;
}