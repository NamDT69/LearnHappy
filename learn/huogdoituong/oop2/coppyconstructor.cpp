#include <iostream>
using namespace std;

class Parent {
	int *x = nullptr;
	int k;
public:
	Parent(){}
	Parent(int i)
	{
		x = new int(i);
		k = i;
		cout << "Inside base class's parameterised "
				"constructor "  << this<< " "  << *x
			<< endl;
	}
	Parent(const Parent &xx){
		cout << "goi ham gan " << this << " " << xx.x << endl;

		x = xx.x;
		// x = new int(*xx.x);
			
	}
	Parent tao(){
		Parent c(100);
		cout << &c << endl;
		return c;
	}
	void prin(){
		cout << this << "  " << *(this->x) << " " <<this->x<< " "<< k<< endl;
	}
	~Parent(){
		cout << "ke huy diet \n";
		if(*this->x!=0)
		delete x;
	}
	// ~Parent(){}
};
Parent tao2(){
	Parent d(200);
	cout << &d << endl;
	return d;
}
int main()
{	
	Parent a(4);
	// Parent b = a;
	Parent b;
	b = tao2();// tại sao nó ko gọi hàm coppy bởi vì trình biên dịch thực hiện tối ưa nên sẽ gán trực tiếp luôn
	// Parent b = a.tao();
	a.prin();
	b.prin();
	return 0;
}
