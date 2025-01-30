#include <iostream>
#include <array>
#include <ostream>

int main() {

	std::array<int, 5>

	array = {1,2,3,4,5};

	std::cout << "Size of the array is : " << array.size() << "\n";
	
	std::cout << "Array elements: ";

	for (int element : array) {
		std::cout << element << "\n" ;
	}

	return 0;
}
