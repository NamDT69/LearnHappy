//Bài 68: Tính S(x, n) = -x^2 + x^4  + … + (-1)^n * x^2n
#include <iostream>
#include <math.h>


using namespace std;
int main(){
    int x,n;
    int s=0;
    cout<<"nhap x,n:";
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        s+=(pow(-1,i)*pow(x,2*i));
	}
    cout<<"gia tri s(x,n)="<<s;
    return 0;
}
