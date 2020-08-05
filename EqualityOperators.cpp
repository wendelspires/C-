#include <iostream>

int main(){
	
	bool equal_result {false};
	bool not_equal_result {false};
	
	int num1 {}, num2 {};
	
	std::cout << "Enter two integers separated by a space: ";
	std::cin >> num1 >> num2;
	equal_result = (num1 == num2);
	not_equal_result = (num1 != num2);
	
	std::cout << "Comparision result (equals): " << equal_result << std::endl;
	std::cout << "Comparision result (Not Equals): " << not_equal_result << std::endl;
	
	
}