//Exercise 17

#include <iostream>
#include <vector>
#include <iomanip>

int main (){
	
	char selection {};
	std::vector <int> number {};
	int num_to_add {};
	
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
		
		
		
		if (selection == 'P' || selection == 'p'){
			if (number.size() == 0)
				std::cout << "[] The list is empty" << std::endl;
			else{
				std::cout << "[";
				for(auto num:number)
					std::cout <<" " << num << " ";
				std::cout << "]";
			}
		}

		else if (selection == 'A' || selection == 'a'){
			int num_to_add {};
			std::cout << "Add a number: ";
			std::cin >> num_to_add ;
			number.push_back(num_to_add);
		}
		
		else if (selection == 'M' || selection == 'm'){
			
			if (number.size() == 0)
				std::cout << "\nUnable to calculate the mean, no data" << std::endl;
			
			else{
			double average {};
			double total {};
			
			for (auto num:number)
				total += num;
			
			if (number.size() != 0)
				average = total/number.size();
				
				std::cout << std::fixed << std::setprecision(1);
				std::cout << "Average of the numbers is: " << average << std::endl;
			}	
		}
		
		//Smalles Number
		else if (selection == 'S' || selection == 's'){
			std::cout << "Smallest number: " << std::endl;
			
			if (number.size() == 0)
				std::cout << "\nUnable do determine the smallest number, list is empty" << std::endl;
			
			else{
				int smallest = number.at(0);
				for (auto num:number)
					if (num < smallest)
					smallest = num;	
				std::cout << "The smallest number is: " << smallest << std::endl;
				}
		}
		
		else if (selection == 'L' || selection == 'l'){
			
			if (number.size() == 0)
				std::cout << "\nUnable do determine the smallest number, list is empty" << std::endl;
			
			else{
				int largest = number.at(0);
				for (auto num:number)
					if (num > largest)
					largest = num;	
				std::cout << "The Largest number is: " << largest << std::endl;
				}
		}
		
		else if (selection == 'Q' || selection == 'q'){
			std::cout << "Goodbye! " << std::endl;
		}
		
		else
			std::cout << "Sorry, try again..." << std::endl;
		
	
	} while (selection != 'q' && selection != 'Q');
	
	return 0;
}