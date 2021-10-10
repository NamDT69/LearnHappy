#include <iostream>
using namespace std;
int ucln(int a,int b){
    int r;
    if(a<b) return ucln(b,a);
    r=a%b;
    if(r==0) return b;
    else return ucln(b,r);
}
int main(){
    int a=5;
    int b=25;
    cout<<ucln(a,b);
    system("pause");
    return 0;
}