#include <iostream>
#include "numeric_list.h"
using namespace std;

int main () {
	numeric_list l;
	
	for (int i = 0; i < 6; ++i) {
		l.add(i);
	}
	l.print();
	
	numeric_item *p = l.find(4);
	if (p != nullptr)
		cout << "found numeric_item 4" << endl;
	
	return 0;
}
