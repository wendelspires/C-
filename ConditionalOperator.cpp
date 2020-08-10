#include <iostream>

int main(){
	
/*	int a{10}, b {20};
	int score {92};
	int result {};
	
	result = (a > b) ? a:b ;
	
	std::cout << "Result = " << result << std::endl;
	
	result = (a > b ) ? (b-a):(a-b);
	
	std::cout << "Result = " << result << std::endl;
	
	result = (b != 0) ? (a/b):0;
	
	std::cout << "Result = " << result << std::endl;
*/
	
/*	int num {};
	
	std::cout << "Enter an Integer: ";
	std::cin >> num;
	
	//if is even or odd
	
	if (num % 2 == 0)
		std::cout << num << " is even " << std::endl;
	else
		std::cout << num << " is odd " << std::endl;	
	
	std::cout << num << " is " << ((num %2 == 0) ? "even":"odd") << std::endl;	
	
*/

	int num1{},num2{};
	
	std::cout << "Enter two integers separated by a space: " ;
	std::cin >> num1 >> num2;
	
	if (num1 != num2)
		std::cout << ((num1>num2) ? "Number 1 is greater than 2":"Number 2 is greater than 1") << std::endl;
	else
		std::cout << "The numbers are the same" << std::endl;
	
	return 0;
}