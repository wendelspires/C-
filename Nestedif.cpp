//Nested if statement
#include <iostream>

int main (){
	
/*	int score {};
	
	std::cin >> score;
	if (score > 90){
		std::cout << "A+" << std::endl;
	}
	else{
		std::cout << "A" << std::endl;
	}
*/
	int score_frank {};
	int score_bill {};
	
	std::cout << "Score Frank: ";
	std::cin >> score_frank;
	std::cout << "Score Bill: ";
	std::cin >> score_bill;

	if (score_frank != score_bill){
		if (score_frank > score_bill){
			std::cout << "Frank Wins!!! " << std::endl;	
		}	
		else{
			std::cout << "Bill Wins!!! " << std::endl;
		}
	}
	
	else{
		std::cout << "Looks like a tie!!!" << std::endl;
	}

	return 0;
}