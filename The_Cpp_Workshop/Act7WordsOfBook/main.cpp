#include <iostream>
#include <memory>
#include "book.h"

using namespace std;

char const *book[] {
	"What a piece of work is man,",
	"  How noble in reason, how infinite is faculty,",
	"In form and moving how express and admirable,",
	"  In action how like an Angel, In apprehension how like a god.",
	"The beauty of the world.    The paragon of animals.",
};

int main () {
	page pg;
	
	for (auto *p : book) {
		cout << '\'' << p << '\'' << endl;
		auto l = make_unique<line>(p);
		pg.append(l.release());
	}
	cout << endl;
	pg.print();
	
	return 0;
}
