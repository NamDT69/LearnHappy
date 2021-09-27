#include <iostream>

int main(){
	float a = 0.1;
	float b = 0.2;
	float c = 0.3;

	if (0.1 + 0.2 == 0.3){
		std::cout << "===" << std::endl;
	} else {
		std::cout << "not === \n";
	}
// ====================================
	if (a + b == c){
		std::cout << "===" << std::endl;
	} else {
		std::cout << "not === \n";
	}
	int x = 9;
	int *k = &x;
	std::cout << *k;

}
