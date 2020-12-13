//
// Created by steam.hyperpolyglot on 12/12/2020.
//

#include <iostream>
#include "numeric_list.h"
using namespace std;

numeric_list::~numeric_list() {
	while (head_ != nullptr) {
		numeric_item *p = head_;
		head_ = head_->next_;
		cout << "deleting " << p->value_ << endl;
		delete p;
	}
}

void numeric_list::print() {
	for (numeric_item *p = head_; p != nullptr; p = p->next_) {
		cout << p->value_ << " ";
	}
	cout << endl;
}

void numeric_list::add(int v) {
	numeric_item *newp = new numeric_item;
	newp->value_ = v;
	newp->next_ = head_;
	head_ = newp;
}

numeric_item *numeric_list::find(int v) {
	for (numeric_item *p = head_; p != nullptr; p = p->next_) {
		if (p->value_ == v)
			return p;
	}
	return nullptr;
}