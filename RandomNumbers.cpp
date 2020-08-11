//Random Numbers

#include <iostream>
#include <cstdlib>
#include <ctime>

int main (){
	
	int random_number {};
	size_t count {10};			// number of random numbers to generate
	int min {1}; 				//lower bound
	int max {6};				//upper bound
	
	//std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;
	//srand(time(nullptr));

	for (size_t i{1}; i<=count; i++){
		random_number = rand() % max + min;
		std::cout << random_number << std::endl;
	}
	
	return 0;
}