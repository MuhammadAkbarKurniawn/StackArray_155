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
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Display" << endl;
		cout << "4. Exit" << endl;
		cout << "\nEnter your choice : ";
		cin >> ch;
		switch (ch) {
		case '1': {
			cout << "\nStack is empty" << endl;
			int element;
			cin >> element;
			s.push(element);
			break;
		}

		case '2':
			if (s.empty()) {
				cout << "\nstack is empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice" << endl;
			break;
		}
	}
};