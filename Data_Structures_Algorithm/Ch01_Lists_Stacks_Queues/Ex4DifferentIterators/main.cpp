#include <iostream>
#include <forward_list>
#include <vector>

int main () {
	std::vector<std::string> vec = {
			"Lewis Hamilton", "Lewis Hamilton", "Nico Rosenberg", "Sebastian Vettel", "Lewis Hamilton",
			"Sebastian Vettel", "Sebastian Vettel", "Sebastian Vettel", "Fernando Alonso"
	};
	
	auto it = vec.begin();      // Constant time
	std::cout << "Latest winner is: " << *it << std::endl;
	
	it += 8;
	std::cout << "Winner before 8 years was: " << *it << std::endl;
	
	advance(it, -3);
	std::cout << "Winner before 3 years of that was: " << *it << std::endl;
	
	std::forward_list<std::string> fwd(vec.begin(), vec.end());
	
	auto it1 = fwd.begin();
	std::cout << "Latest winner is: " << *it << std::endl;
	
	advance(it1, 5);    // Time taken is proportional to the number of elements
	
	std::cout << "Winner before 5 years was: " << *it << std::endl;
	
	// Going back will result in compile time error was forward_list only
	// allows us to move towards the end.
	// advance(it1, -2);
	
	return 0;
}
