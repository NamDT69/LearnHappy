#include <iostream>
using namespace std;

int current_size = -1;
const int max_stack = 100;
int stack[max_stack];

bool empty() {
	return (current_size == -1);
}

bool full() {
	return (current_size == max_stack);
}

void push(int data) {
	if (!full()) {
		current_size++;
		stack[current_size] = data;
	}
	else {
		cout << "max roi";
	}
}
int top() {//lấy gía trị đầu tiên
	if (!empty()) {
		int data = stack[current_size];
		return data;
	}
	else {
		cout << "max erro";
	}
}


int pop() {//lấy giá trị rồi trừ cái đầu tiên trên top

	if (!empty()) {
		int data = stack[current_size];
		current_size--;
		return data;
	}
	else {
		cout << "max erro";
	}
}
int main() {
	push(12);
	push(32);
	push(102);
    pop();
	cout << top();
	
	return 0;
}