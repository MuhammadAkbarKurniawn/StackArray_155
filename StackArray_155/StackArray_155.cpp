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

	}
};