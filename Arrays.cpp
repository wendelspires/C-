//Arrays

#include <iostream>

int main(){
	
	//char vowels[] {'a','e','i','o','u'};
	//std::cout << "\nThe first Vowels is: " << vowels[0] << std::endl;
	//std::cout << "The last vowel is: " << vowels[4] << std::endl;
	
	double hi_temps [] {90.1, 89.8, 77.5, 81.6};
	std::cout << "The first hi_temps is: " << hi_temps[0] << std::endl;
	
	hi_temps [0] = 100.3;
	
	std::cout << "The new hi_temps is: " << hi_temps[0] << std::endl;

	return 0;
}