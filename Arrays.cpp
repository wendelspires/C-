//Arrays

#include <iostream>

int main(){
	
	//char vowels[] {'a','e','i','o','u'};
	//std::cout << "\nThe first Vowels is: " << vowels[0] << std::endl;
	//std::cout << "The last vowel is: " << vowels[4] << std::endl;
	
	//double hi_temps [] {90.1, 89.8, 77.5, 81.6};
	//std::cout << "The first hi_temps is: " << hi_temps[0] << std::endl;
	
	//hi_temps [0] = 100.3;
	
	//std::cout << "The new hi_temps is: " << hi_temps[0] << std::endl;

	int test_scores []{100,90,80,70,60};
	
	std::cout << "\nFirst score at index 0: " << test_scores[0] << std::endl;
	std::cout << "\nSecond score at index 1: " << test_scores[1] << std::endl;
	std::cout << "\nThird score at index 2: " << test_scores[2] << std::endl;
	std::cout << "\nFourth score at index 3: " << test_scores[3] << std::endl;
	std::cout << "\nFifth score at index 4: " << test_scores[4] << std::endl;
	
	std::cout << "\nEnter 5 test scores ";
	std::cin >> test_scores[0];
	std::cin >> test_scores[1];
	std::cin >> test_scores[2];
	std::cin >> test_scores[3];
	std::cin >> test_scores[4];
	
	std::cout << "\nThe Updated array is: " << std::endl;
	std::cout << "New first score at index 0: " << test_scores[0] << std::endl;
	std::cout << "New second score at index 1: " << test_scores[1] << std::endl;
	std::cout << "New third score at index 2: " << test_scores[2] << std::endl;
	std::cout << "New fourth score at index 3: " << test_scores[3] << std::endl;
	std::cout << "New fifth score at index 4: " << test_scores[4] << std::endl;
	
	std::cout << "\nNotice what the value of the array name is: " << test_scores << std::endl;
	
	return 0;
}