//Section 8
//Mixed Expression

#include <iostream>

int main (){
	
	int total {};
	int num1{}, num2 {}, num3 {};
	const int count {3};
	
	std::cout << "Enter 3 integers separated by spaces: " << std::endl;
	std::cin >> num1 >> num2 >> num3;
	
	total = num1 + num2 + num3;
	
	double average = {0.0};
	
	average = total / count;

	std::cout << "The 3 numbers were: " << num1 << ";" << num2 << ";" << num3 << std::endl;
	std::cout << "The sum of the numbers is: " << total << std::endl;
	std::cout << "The average of the numbers is: " << average << std::endl;
	
	return 0;
}