//Section 8
//Increment operator

/*
	Increment operator ++
	Decrement operator --
	
*/

#include <iostream>

int main (){
	
	int counter {10};
	int result {0};
	
/*	//Example 1 - Simple increment
	std::cout << "Counter: " << counter << std::endl;
	
	counter = counter + 1;
	std::cout << "Counter: " << counter << std::endl;
	
	counter++;
	std::cout << "Counter: " << counter << std::endl;
	
	++counter;
	std::cout << "Counter: " << counter << std::endl;
	
	
*/
	
/*
	//Example 2 - Preincrement
	
	counter = 10;
	result = 0;
	
	std::cout << "Counter: " << counter << std::endl;
	
	result = ++counter; //pre increment
	std::cout << "Counter: " << counter << std::endl;
	std::cout << "Result: " << result << std::endl;	
	
*/
	
	//Example 3 - Post-increment
	
	counter = 10;
	result = 0;
	
	std::cout << "Counter: " << counter << std::endl;
	
	result = counter++; //post-increment
	std::cout << "Counter: " << counter << std::endl;
	std::cout << "Result: " << result << std::endl;	
	
	
	
	return 0;
}