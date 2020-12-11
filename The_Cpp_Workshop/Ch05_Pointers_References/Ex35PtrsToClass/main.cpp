#include <iostream>

using namespace std;

struct myData {
	char const *name_;
	bool hero_;
};

myData heroes[]{
		{ "Spider Man",     true },
		{ "Joker",          false },
		{ "Doctor Octopus", false },
		{ "Thor",           true },
		{ "Batman",         true },
		{ "Loki",           false }
};

void printData ( myData *p ) {
	cout << "Hello. I am " << ( *p ).name_ << ". ";
	if ( p->hero_ )
		cout << "I am a hero." << endl;
	else
		cout << "I am a villian." << endl;
}

int main () {
	cout << sizeof(myData) << " " << sizeof(myData*) << endl;
	for (auto p = begin(heroes); p < end(heroes); ++p) {
		printData(p);
	}
	return 0;
}
