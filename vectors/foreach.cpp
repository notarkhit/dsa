#include <iostream>
#include <bits/stdc++.h>
#include <vector>

int main() {

	std::vector<int> vectorArray;
	
	std::vector<int> vectorArray2;

	vectorArray = {1,2,3,4,5,6,7};
	vectorArray2 = {1,2,3,4,5,6,7};

	for(int element : vectorArray) {
		vectorArray2.push_back(element);
	}

	for (int element : vectorArray2){
		std::cout << element << "\n" ;
	}

	return 0;
}
