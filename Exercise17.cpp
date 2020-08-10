//Exercise 17

#include <iostream>
#include <vector>

int main (){
	
	char selection {};
	int number {};
	
	do {
		std::cout << "\n----------------------" << std::endl;
		std::cout << "P - Print number" << std::endl;
		std::cout << "A - Add a number" << std::endl;
		std::cout << "M - Display mean the numbers" << std::endl;
		std::cout << "S - Display the smallest number" << std::endl;
		std::cout << "L - Display the largest number" << std::endl;
		std::cout << "Q - Quit" << std::endl;
		std::cout << "\nEnter in your selection: ";
		std::cin >> selection;
		
		if (selection == 'P' || selection == 'p')
			std::cout << "[ " << number << " ] " << std::endl;
		
		else if (selection == 'A' || selection == 'a')
			std::cout << "Add a number: ";
			std::cin >> number;
	
/*		else if (selection == 'M' || selection == 'm')
			std::cout << "The mean of the numbers: " << std::endl;
		
		else if (selection == 'S' || selection == 's')
			std::cout << "Smallest number: " << std::endl;
	
		else if (selection == 'L' || selection == 'l')
			std::cout << "Largest number: " << std::endl;
	
		else if (selection == 'Q' || selection == 'q')
			std::cout << "Goodbye! " << std::endl;
*/
		else
			std::cout << "Sorry, try again..." << std::endl;
		
	
	} while (selection != 'q' && selection != 'Q');
	
	return 0;
}