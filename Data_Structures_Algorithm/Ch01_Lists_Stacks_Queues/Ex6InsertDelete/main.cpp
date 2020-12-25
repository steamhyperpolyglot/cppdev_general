#include <iostream>
#include <list>

int main () {
	std::list<int> list1 = {1, 2, 3, 4, 5};
	
	list1.push_back(6);
	
	list1.insert(next(list1.begin()), 0);
	
	list1.insert(list1.end(), 7);
	
	list1.pop_back();
	
	std::cout << "List after insertion & deletion functions: ";
	for (auto i : list1)
		std::cout << i << " ";
	return 0;
}
