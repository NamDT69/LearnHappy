#include <iostream>
#include <array>
using namespace std;
int main(){
    int c = 9; int  b  = 8;
    int *h = &b;
    cout << h ;
	array<int, 4> a = {1, 2,3,4};
    cout << a.data();
}
