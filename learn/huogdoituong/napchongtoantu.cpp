#include <iostream>
using namespace std;
struct ps {
	int ts;
	int ms;
};// tao mot struct ve phan so gom tu so va mau so
void nhap(ps& u);
void xuat(ps u);
int ucln(int a, int b);
void rutgon(ps& u);
ps operator+(ps const& u, ps const& v);
ps operator-(ps const& u, ps const& v);
ps operator*(ps const& u, ps const& v);
ps operator/(ps const& u, ps const& v);

int main() {
	ps u, v;
	cout << "nhap phan so thu 1 \n";
	nhap(u);
	cout << "nhap phan so thu 2 \n";
	nhap(v); 
	cout << "\n cong hai phan so";
	ps c=u+v;
	xuat(c);
	return 0;
}
void nhap(ps& u) {
	cout << "nhap tu so :";
	cin >> u.ts;
	cout << "nhap mau so :";
	cin >> u.ms;
}
void xuat(ps u) {
	cout << "phan so :" << u.ts<<"/" << u.ms;
}
int ucln(int a, int b) {
	if (b == 0) {
		return a;
	}
	return ucln(b, a % b);
}
void rutgon(ps& u) {
	int temp=ucln(u.ts, u.ms);
	u.ts = u.ts / temp;
	u.ms = u.ms / temp;
}
ps operator+(ps const& u, ps const& v) {
	ps t;
	t.ts = u.ts * v.ms + v.ts * u.ms;
	t.ms = u.ms * v.ms;
	rutgon(t);
	return t;

}
ps operator-(ps const& u, ps const& v) {
	ps t;
	t.ts = u.ts * v.ms - v.ts * u.ms;
	t.ms = u.ms * v.ms;
	rutgon(t);
	return t;	
}
ps operator*(ps const& u, ps const& v) {
	ps t;
	t.ts = u.ts*v.ts;
	t.ms = u.ms * v.ms;
	rutgon(t);
	return t;
}
ps operator/(ps const& u, ps const& v) {
	ps t;
	t.ts = u.ts * v.ms ;
	t.ms = u.ms * v.ts;
	rutgon(t);
	return t;
}
