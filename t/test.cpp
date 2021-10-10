#include <iostream>
#include <array>
template <typename T, unsigned int n>
class MyAraay{
public:
	T arr[n];
	T &at(int t){
		return arr[t];
	}
	T &operator [](int t){
		return arr[t];
	}
	T *data(){
		return arr;
	}
};
int main(){
	MyAraay<int, 3> a = {3,2,1};
	std::cout << a.at(0) << " "<< a[0];
	std::cout << " " << *(a.data() + 1);
}
