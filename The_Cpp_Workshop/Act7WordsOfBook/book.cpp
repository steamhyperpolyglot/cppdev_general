//
// Created by steam.hyperpolyglot on 18/12/2020.
//

#include <iostream>
#include "book.h"

using namespace std;

word::word(char const *srcp, int l, int spaces)
	: ptr_(make_unique<char[]>(l+1)),
	letters_(l),
	spaces_(spaces) {
	char *dstp;
	
	for (dstp = ptr_.get(); l > 0; --l) {
		*dstp++ = *srcp++;
	}
	
	*dstp = '\0';
}

void word::to_string(char *dstp) {
	char *srcp = ptr_.get();
	
	for (int letters = letters_; letters > 0; --letters) {
		*dstp++ = *srcp++;
	}
	
	for (int spaces = spaces_; spaces > 0; --spaces) {
		*dstp++ = ' ';
	}
	
	*dstp = '\0';
}

int word::size() {
	return letters_ + spaces_;
}

line::line (char const *str)
	: head_(nullptr),
	next_(nullptr) {
	char const *bp;     // pointer to beginning
	char const *ewp;    // pointer to end of word
	char const *esp;    // pointer to end of spaces
	
	for (bp = str; *bp != '\0'; bp = esp) {
		for (ewp = bp; *ewp != '\0' && *ewp != ' '; ++ewp) {
			// empty
		}
		
		for (esp = ewp; *esp != '\0' && *esp == ' '; ++esp) {
			// empty
		}
		
		append(new word(bp, ewp-bp, esp-ewp));
	}
}

line::~line() {
	while (head_ != nullptr) {
		auto wp = head_;
		head_ = head_->next_;
		delete wp;
	}
}

void line::append(word *w) {
	word **wpp = &head_;
	
	while ((*wpp) != nullptr) {
		wpp = &((*wpp)->next_);
	}
	
	*wpp = w;
}

void line::to_string(char *dstp) {
	for (word *wp = head_; wp != nullptr; wp = wp->next_) {
		wp->to_string(dstp);
		dstp = dstp + wp->size();
	}
	
	*dstp = '\0';
}

int line::size() {
	int size = 1;   // for null terminator
	
	for (word *wp = head_; wp != nullptr; wp = wp->next_) {
		size = size + wp->size();
	}
	
	return size;
}

page::page(): head_(nullptr) {
	// empty
}

page::~page() {
	while (head_ != nullptr) {
		auto lp = head_;
		head_ = head_->next_;
		delete lp;
	}
}

void page::append(line *lp) {
	line **lpp = &head_;
	
	while ((*lpp) != nullptr) {
		lpp = &((*lpp)->next_);
	}
	
	*lpp = lp;
}

void page::print() {
	for (line *lp = head_; lp != nullptr; lp = lp->next_) {
		auto buffer = make_unique<char[]>(lp->size());
		lp->to_string(buffer.get());
		cout << '\'' << buffer.get() << '\'' << endl;
	}
}