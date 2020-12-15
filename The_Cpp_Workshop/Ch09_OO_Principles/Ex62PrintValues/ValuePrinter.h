//
// Created by steam.hyperpolyglot on 13/12/2020.
//

#ifndef VALUEPRINTER_H
#define VALUEPRINTER_H

#include <iostream>
#include <string>

using namespace std;

class ValuePrinter{
public:
	void Print(string msg, float f) {
		cout << msg << " : " << f << endl;
	}
	
	void Print(string msg, int i) {
		cout << msg << " : " << i << endl;
	}
	
	void Print(string msg, string s) {
		cout << msg << " : " << s << endl;
	}
};

#endif //VALUEPRINTER_H
