//While Loop

#include <iostream>
#include <vector>

int main (){
	
/* 	int num {};
	
	std::cout << "Enter a positive integer - Start the countdown: ";
	std::cin >> num;
	
	while (num > 0){
		std::cout << num << std::endl;
		--num;
	}
	std::cout << "Blastoff!!" << std::endl; */
/* 	
	int num{};
	std::cout << "Enter a positive integer to count up to: ";
	std::cin >> num;
	
	int i{1};
	while (num >= i){
		std::cout << i << std::endl;
		i++;
	} */
	
/* 	int number {};
	
	std::cout << "Enter an integer less than 100: ";
	std::cin >> number;
	
	while (number >= 100){ //!(number < 100)
		std::cout << "Enter an integer less than 100: ";
		std::cin >> number;
	}
	
	std::cout << "Thanks" << std::endl;
	 */
	
	bool done {false};
	int number {0};
	
	while (!done){ // when done is true
		std::cout << "Enter an integer between 1 and 5: ";
		std::cin >> number;
		
		if (number <= 1 || number >= 5)
			std::cout << "Sorry, out of range, try again..." << std::endl;
		else{
			std::cout << "Thanks!" << std::endl;
			done = true;
		}
	}
	
	
	return 0;
}