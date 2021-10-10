#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class person {
private:
	size_t age;
	char name1[100];
	char addres1[100];
	char email[100];
public:
	person(size_t tuoi = 0, string hoten = " ", string diachi = " ", string email = " ");
	void sethoten(string hoten);
	void setdiachi(string diachi);
	void setemail(string email);
	friend void docfilenhiphan(ofstream& a, person b);
	void show();
};
person::person(size_t tuoi, string hoten, string diachi, string email) {
	this->age = tuoi;
	this->sethoten(hoten);
	this->setdiachi(diachi);
	this->setemail(email);
}
void person::show() {
	cout << this->name1;
	cout << endl << this->age;
	cout << "\n" << this->addres1;
	cout << "\n" << this->email;
	cout << endl;
}
void docfilenhiphan(ofstream& a, person b) {

	a.write((char*)&b, sizeof(person));
}
void person::sethoten(string hoten) {
	size_t size = hoten.length();
	size = (size > 99) ? 99 : size;
	hoten.copy(this->name1, size);
	this->name1[size] = '\0';
}
void person::setdiachi(string diachi) {
	size_t size = diachi.length();
	size = (size > 99) ? 99 : size;
	diachi.copy(this->addres1, size);
	this->addres1[size] = '\0';
}
void person::setemail(string email) {
	size_t size = email.length();
	size = (size > 99) ? 99 : size;
	email.copy(this->email, size);
	this->email[size] = '\0';
}


int main() {
	ifstream doc("hayqua.txt", ios::binary);
	person p;

	/*int index;
	cout << "nhap 1->3: ";
	cin >> index;
	index = (index >= 0 && index < 3) ? index : 0;
	doc.seekg(index * sizeof(person));
	doc.read((char*)&p, sizeof(person));*/
	if (!doc) {
		cout << "loi ko thuc hie dc";
	}
	else {
		while (!doc.eof()) {
			doc.read((char*)&p, sizeof(person));
			if (doc.good()) {
				p.show();
			}
		}
	}
	doc.close();
	return 0;
}