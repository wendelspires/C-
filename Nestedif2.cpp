//Grades

#include <iostream>

int main (){
	
	int score {};
	
	std::cout << "Enter your score exam (0-100): ";
	std::cin >> score;
	
	char letter_grade {};
	
	if (score >= 0 && score <= 100){
		if (score > 90)
			letter_grade = 'A';
		else if (score > 80)
			letter_grade = 'B';
		else if (score > 70)
			letter_grade = 'C';
		else if (score > 60)
			letter_grade = 'D';
		else
			letter_grade = 'F';
		
		std::cout << "Your grade is: " << letter_grade << std::endl;
		
		if (letter_grade == 'F')
			std::cout << "Sorry, you must repeat the class" << std::endl;
		else
			std::cout << "Congrats!" << std::endl;
	}
	
	else{
		std::cout << "Sorry, " << score << " is not in range" << std::endl;
	}

	return 0;	
}