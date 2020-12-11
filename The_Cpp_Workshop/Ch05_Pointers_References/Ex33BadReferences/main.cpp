#include <iostream>

int main () {
	char* p = nullptr;
	char& r = *p;
	r = '!';
	return 0;
}
