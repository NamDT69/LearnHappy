//77. Viết chương trình tính tổng của dãy số sau : S(n) = 1 + 2 + 3 + … + n
#include <iostream>
using namespace std;



int main(){
    unsigned int n,s=1;
    cout<<"nhap vao mot so n:";
    cin>>n;

    for(int i=2; i<=n; ++i) s+=i;
    cout<<"gia tri s(n)="<<s;

    system("pause");

    return 0;
}
