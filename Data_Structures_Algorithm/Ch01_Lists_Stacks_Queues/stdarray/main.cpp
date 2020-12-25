#include <iostream>
#include <array>

void print(std::array<int, 5> arr) {
	for (auto ele: arr) {
		std::cout << ele << " ";
	}
	std::cout << std::endl;
}

void print_with_iterator(std::array<int, 5> arr) {
	std::cout << "Using an iterator to loop through the elements: ";
	for (auto it = arr.begin(); it != arr.end(); it++) {
		auto element = (*it);
		std::cout << element << ' ';
	}
	std::cout << std::endl;
}

int main () {
	std::array<int, 5> arr = { 1, 2, 3, 4, 5 };
	
	arr[0] = 1;
	std::cout << "First Element: " << arr[0] << std::endl;
	print(arr);
	print_with_iterator(arr);
	std::cout << "Using other accessors: " << std::endl;
	std::cout << "arr.front(): " << arr.front() << std::endl;
	std::cout << "arr.back(): " << arr.back() << std::endl;
	std::cout << "arr.data(): " << *(arr.data() + 1) << std::endl;
	
	std::array<int, 4> arr2 = { 1, 2, 3, 4 };
	
	std::cout << "Elements in second array: ";
	
	for (int i = 0; i < arr2.size(); i++) {
		std::cout << arr2[i] << " ";
	}
	
	return 0;
}
