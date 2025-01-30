#include <iostream>
#include <bits/stdc++.h>
#include <vector>

int main() {

	std::vector<int> vectorArray;
	

	vectorArray = {1,2,3,4,5,6,7};

	for(auto&& element : *vectorArray) {
		element += 10 ;
	}

	for (int element : vectorArray){
		std::cout << element ;
	}

	return 0;
}
