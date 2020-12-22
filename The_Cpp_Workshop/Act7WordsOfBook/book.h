//
// Created by steam.hyperpolyglot on 18/12/2020.
//

#ifndef BOOK_H
#define BOOK_H

#include <memory>

using namespace std;

class word {
	friend class line;
	unique_ptr<char[]> ptr_;
	int letters_;
	int spaces_;
	word *next_;

public:
	word(char const *srcp, int l, int spaces);
	void to_string(char *dstp);
	int size();
};  // end word

class line {
	friend class page;
	word *head_;
	line *next_;
	
public:
	line(char const *str);
	~line();
	void append(word *w);
	void to_string(char *dstp);
	int size();
};  // end line

class page {
	line *head_;
	
public:
	page();
	~page();
	void append(line *lp);
	void print();
};  // end page

#endif //BOOK_H
