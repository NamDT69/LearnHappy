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



127.0.0.1	localhost
127.0.1.1	Magician

# The following lines are desirable for IPv6 capable hosts
::1     ip6-localhost ip6-loopback
fe00::0 ip6-localnet
ff00::0 ip6-mcastprefix
ff02::1 ip6-allnodes
ff02::2 ip6-allrouters
