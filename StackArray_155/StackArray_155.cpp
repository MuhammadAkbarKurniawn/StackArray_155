#include<iostream>
#include<string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//constuctor
	StackArray() {
		top = -1;

	}

	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceds the limit " << endl;
		}

		top++;
		stack_array[top] + element;
		cout << endl;
		cout << element << "DItambahkan (Pushed)" << endl;

		return element;
	}
	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot Pop" << endl;
			return;
		}
		cout << "\nThe Popped element is :" << stack_array[top] << endl;
		top--;
	}
	//method for check 
	bool empty() {
		return (top = -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n+++Stack Menu+++\n";
		cout << "1. Push";
		cout << "2. Pop";
		cout << "3. Display";
		cout << "4. Exit";
		cout << "\nEnter your choice : ";
		cin >> ch;
		switch (ch) {
			Case '1' : {
				cout <<
			}
		}
	}
}