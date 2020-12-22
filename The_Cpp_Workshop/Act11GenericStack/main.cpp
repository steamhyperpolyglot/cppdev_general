#include <iostream>
#include "generic_stack.h"
using namespace std;


int main () {
	Stack<int> testStack;
	testStack.push(1);
	testStack.push(2);
	cout << "stack contains values: ";
	
	for (auto it = testStack.bottom(); it != testStack.top() + 1; ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	cout << "stack contains " << testStack.size() << " elements" << endl;
	testStack.pop();
	cout << "stack contains values: ";
	
	for (auto it = testStack.bottom(); it != testStack.top() + 1; ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	cout << "stack contains " << testStack.size() << " elements" << endl;
	testStack.push(9);
	testStack.push(50);
	cout << "stack contains values: ";
	
	for (auto it = testStack.bottom(); it != testStack.top() + 1; ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	cout << "stack contains " << testStack.size() << " elements" << endl;
	testStack.pop();
	cout << "stack contains values: ";
	
	for (auto it = testStack.bottom(); it != testStack.top() + 1; ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	cout << "Is the Stack empty: " << (testStack.empty() == 1 ? "YES" : "NO") << endl;
	cout << "value of top element is: " << *testStack.top() << endl;
	cout << "value of bottom element is: " << *testStack.bottom() << endl;
	
	return 0;
}
