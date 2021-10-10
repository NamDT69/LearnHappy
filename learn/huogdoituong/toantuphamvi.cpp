#include <iostream>
using namespace std;
int b=100;// bienn toan cuc
int &get(){b ++;
	return b ;
}
int main() {
//	int b=20;
//cout<<::b;
//	const int &r=b;
//	b+=10;
//	cout<<r;
//	r+=10; //loi ch dc dat ko

cout<<get();
cout  <<  b;
}
