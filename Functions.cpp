// Functions
// Math examples

#include <iostream>
#include <cmath>

int main(){
	
	double num {};
	
	std::cout << "Enter a number (double): ";
	std::cin >> num;
	
	std::cout << "The sqrt of " << num << " is: " << sqrt(num) << std::endl;
	std::cout << "The cubed root of " << num << " is: " << cbrt(num) << std::endl;
	
	std::cout << "The sine of " << num << " is: " << sin(num) << std::endl;
	std::cout << "The consine of " << num << " is: " << cos(num) << std::endl;
	
	double power;
	
	std::cout << "\nEnter a power to raise " << num << " to: ";
	std::cin >> power;
	std::cout << num << " raised to the " << power << " power is: " << pow(num,power) << std::endl;

	
	return 0;
}