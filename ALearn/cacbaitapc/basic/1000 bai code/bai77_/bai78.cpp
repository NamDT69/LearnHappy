#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cout<<"nhap mot so :";
        cin>>n;
    }while(n<0);
    for(int i=1;i<=n;i++) if(n%i==0) cout<<i<<endl;
    system("pause");
    return 0;
}