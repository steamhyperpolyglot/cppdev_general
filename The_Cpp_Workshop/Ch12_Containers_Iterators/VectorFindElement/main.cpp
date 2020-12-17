#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool contains(const int value, const vector<int> &vec) {
	return (find(vec.begin(), vec.end(), value) != vec.end());
}

int main () {
	vector<int> vec {1,2,3,4,5,6,7,8,9,10};
	
	const int numToCheck = 9;
	
	cout << "Vector contains " << numToCheck << " "
		 << (contains(numToCheck, vec) ? "YES" : "NO");
	cout << endl;
	
	return 0;
}
