// Do While loop

#include <iostream>

int main (){
	
	char selection {};
	
	do {
		std::cout << "\n---------------------" << std::endl;
		std::cout << "1. Do This" << std::endl;
		std::cout << "2. Do That" << std::endl;
		std::cout << "3. Do something else" << std::endl;
		std::cout << "Q. Quit" << std::endl;
		std::cout << "\nEnter in your selection: ";
		std::cin >> selection;
		
		if (selection == '1')
			std::cout << "You chose 1 - Do This!" << std::endl;
		
		else if ( selection == '2')
			std::cout << "You chose 2 - Do That!" << std::endl;
		
		else if ( selection == '3')
			std::cout << "You chose 3 - Do something else!" << std::endl;

		else if ( selection == 'q' || selection == 'Q')
			std::cout << "Goodbye" << std::endl;
			
		else
			std::cout << "Sorry, Try again..." << std::endl;
		
	} while (selection != 'q' && selection != 'Q');
}