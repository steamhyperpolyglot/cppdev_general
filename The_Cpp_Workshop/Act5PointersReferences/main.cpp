#include <iostream>
using namespace std;

char const *arr[26] { "alpha", "bravo", "charlie", "delta", "echo" };

int printarray(char const **begin, char const **end, int &count) {
	count = 0;
	
	if (begin == nullptr || end == nullptr || begin > end || end-begin > 26) {
		return 0;
	}
	
	for (count = 0; begin < end; ++begin) {
		if (*begin != nullptr) {
			++count;
			cout << *begin << endl;
		}
	}
}

int main () {
	int count;
	if (printarray(nullptr, nullptr, count) == 0 || count != 0) {
		cout << "error in printarray() call 1" << endl;
	} else {
		cout << "count = " << count << endl;
	}
	
	if (printarray(arr, &arr[4], count) == 0 || count != 4) {
		cout << "error in printarray() call 2" << endl;
	} else {
		cout << "count = " << count << endl;
	}
	
	if (printarray(&arr[4], &arr[3], count) == 0 || count != 0) {
		cout << "error in printarray() call 3" << endl;
	} else {
		cout << "count = " << count << endl;
	}
	
	if (printarray(&arr[4], &arr[10], count) == 0 || count != 1) {
		cout << "error in printarray() call 4" << endl;
	} else {
		cout << "count = " << count << endl;
	}
	
	if (printarray(&arr[0], &arr[100], count) == 0 || count != 0) {
		cout << "error in printarray() call 5" << endl;
	} else {
		cout << "count = " << endl;
	}
	
	return 0;
}
