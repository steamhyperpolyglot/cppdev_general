#include <iostream>
using namespace std;

struct myData {
	char const* name_;
	bool darkside_;
	
	myData(char const* name, bool dark) {
		name_ = name;
		darkside_ = dark;
	}
	
};

myData cast[3] {
	{ "Darth Vader", true },
	{ "Luke Skywalker", false },
	{ "Han Solo", false }
};

void printName(myData& data) {
	cout << "Hello, I am " << data.name_ << endl;
	if (data.darkside_)
		cout << "I was seduced by the dark side" << endl;
}

int main () {
	for (myData& data: cast) {
		printName(data);
	}
	return 0;
}
