//Exercise 6
// Arrays and Vectors

#include <iostream>
#include <vector>

int main (){
	
	std::vector <int> vec {10,20,30,40,50};
	vec.at(0) = 100;
	vec.at(4) = 1000;
	
	std::cout << "The first element: " << vec.at(0) << std::endl;
	std::cout << "The last element: " << vec.at(4) << std::endl;
	
	return 0;
}