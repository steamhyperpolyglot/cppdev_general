#include <iostream>
#include "queue.h"
using namespace std;

int main () {
	Queue<int> testQueue;
	testQueue.push(1);
	testQueue.push(2);
	cout << "queue contains values: ";
	
	for (auto it = testQueue.front(); it != testQueue.back() + 1; ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	cout << "queue contains " << testQueue.size() << " elements" << endl;
	testQueue.pop();
	cout << "queue contains values: ";
	
	for (auto it = testQueue.front(); it != testQueue.back() + 1; ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	cout << "queue contains " << testQueue.size() << " elements" << endl;
	
	testQueue.push(9);
	testQueue.push(50);
	
	cout << "queue contains values: ";
	
	for (auto it = testQueue.front(); it != testQueue.back() + 1; ++it) {
		cout << *it << " ";
	}
	
	cout << endl;
	cout << "queue contains " << testQueue.size() << " elements" << endl;
	
	return 0;
}
