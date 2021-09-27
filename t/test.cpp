#include <iostream>
#include <string>

std::string expand(int a, int b, int c, std::string x, std::string y){
	std::string s;
	s.append("(" + std::to_string(a) + x + "+" + std::to_string(b) + y + ")" + "(" + ""  );
	for (int i = c; i >= 0; --i){
		std::cout << a << "uu";
	}
	std::cout << s;
	return "f";
}
int main(){
	expand(1,2,3,"ha", "fa");
	return 0;
}
