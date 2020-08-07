//Exercise 11

#include <iostream>

int main (){
	
	int age {};

	std::cout << "How old are you? " << std::endl;
	std::cin >> age;
	
	if ( age >= 16){
		std::cout << "Yes, you can drive!! " << std::endl;
	}	
}