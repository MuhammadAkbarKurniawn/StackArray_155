#include<iostream>
#include<string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//Constuctor
	StackArray() {
		top = -1;

	}

	void push() {
		cout << "\nEnter a element : ";
		int element;
		cin >> element;

		if (top == 4) {		//step1.
			cout << "Number of data exceds the limit " << endl;
			return;
		}

		top++;
		stack_array[top] = element;		//step3.
		cout << endl;
		cout << element << "DItambahkan (Pushed)" << endl;

	}
	void pop() {
		if (empty()) {		//step 1
			cout << "\nStack is empty. Cannot Pop" << endl;	//1.a
			return;			//1.b
		}
		cout << "\nThe Popped element is :" << stack_array[top] << endl;		//step2.
		top--;		//step 3 decrement
	}
	//method for check id data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
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
		cout << "1. Push\n" << endl;
		cout << "2. Pop\n" << endl;
		cout << "3. Display\n" << endl;
		cout << "4. Exit\n" << endl;
		cout << "\nEnter your choice : ";
		cin >> ch;
		switch (ch) {
		case '1': {
			s.push();
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