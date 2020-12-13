//
// Created by steam.hyperpolyglot on 12/12/2020.
//

#ifndef NUMERIC_LIST_H
#define NUMERIC_LIST_H

struct numeric_item {
	int value_;
	numeric_item *next_;
};

class numeric_list {
	numeric_item* head_;
	
public:
	numeric_list() : head_(nullptr) {}
	~numeric_list();
	void print();
	void add(int v);
	numeric_item* find(int v);
};

#endif NUMERIC_LIST_H
