#include <iostream>
using namespace std;
struct node {
	int data;
	node* next;
};

int main() {

	node * head = new node();
	head->data = 1;
	
	node* firt = new node();
	firt->data = 2;
	
	node* second = new node();
	second->data = 3;
	second->next = NULL;

	head->next = firt;
	firt->next = second;
	
	int dulieu = head->data;
	cout << dulieu << endl;

	//lieenn ket cac node laij vs nhau

	node* p = head;
	while (p!=NULL) {
		dulieu = p->data;
		p=p->next;
		cout << dulieu << "->";
		}
		cout << endl;
	return 0;
}