#include <iostream>
#include "autobuf.h"
using namespace std;

int main () {
	autobuf buffer("my favourite test string");
	cout << "Hello World! " << buffer.get() << endl;
	return 0;
}
