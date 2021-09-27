#include <iostream>
using namespace std;
template <typename T, unsigned int N>
class Array{
public:
    typedef T arr[N];
    typename Array::arr a;
    T& at(int x){
        return a[x];
    }
    T* begin(){
        return &a[0];
    }
    T& operator[](int x){
        return a[x];
    }
    
};
int main(){
    Array<int , 4> a{1,2,3,4};
    cout << a[3];

    return 0;
}