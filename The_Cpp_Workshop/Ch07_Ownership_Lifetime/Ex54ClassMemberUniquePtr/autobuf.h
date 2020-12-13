//
// Created by steam.hyperpolyglot on 12/12/2020.
//

#ifndef AUTOBUF_H
#define AUTOBUF_H

#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

struct noisy {
	noisy() { cout << "constructing noisy" << endl; }
	~noisy() { cout << "destroying noisy" << endl; }
};

class autobuf {
	unique_ptr<noisy> np_;
	unique_ptr<char[]> ptr_;
	
public:
	autobuf(char const *str);
	char *get();
};

#endif AUTOBUF_H
