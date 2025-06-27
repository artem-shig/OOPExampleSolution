#include "Stack.h"

int main() {
	Stack stack;

	cout << "Enter your numbers (0 - for exit): ";
	int number;

	do {
		cin >> number;
		if (number != 0) {
			stack.push(number);
		}
	} while (number != 0);


	stack.pop();
	stack.pop();

	cout << "Head: " << stack.head() << endl;
	cout << "Stack elements: " << stack.toString() << endl;

	stack.clear();
	cout << "Stack elements: " << stack.toString() << endl;

	return 0;
}