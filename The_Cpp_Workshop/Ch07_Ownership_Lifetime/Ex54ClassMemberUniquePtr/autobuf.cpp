//
// Created by steam.hyperpolyglot on 12/12/2020.
//

#include "autobuf.h"

autobuf::autobuf ( char const *str )
		: np_ ( make_unique<noisy> ()),
		  ptr_ ( make_unique<char[]> ( strlen ( str ) + 1 )) {
	strcpy_s(ptr_.get(), strlen(str) + 1, str);
}

char *autobuf::get() {
	return ptr_.get();
}