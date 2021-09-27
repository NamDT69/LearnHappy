#include <iostream>  
#include <array>
using namespace std;
class arr{
public:
	int *x ;
	int y;
	arr(int i){
		x = new int(i);
		y = i + 1;
	}
private:
	arr(arr &z){
		x = new int(*z.x);
		y = z.y;
	}
	// int *a = new int[5];
	// arr(const arr &b){
	// 	cout  << "goi ham copy \n";
	// }
};
int main(){
	arr b(1);
	arr a = b;
	cout << *a.x;
	return 0;
}