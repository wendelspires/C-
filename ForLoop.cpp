//For Loop

#include <iostream>
#include <vector>

int main (){
	
/*	//square root
	for (int i {1}, j{1}; i <= 10; ++i, ++j){
		
		std::cout << i << " * " << j << " : " << (i*j) << std::endl;
		
	}
*/

//	for (int i{1}; i<=10 ; ++i)
//		std::cout << i << std::endl;
	
//	increment for two and two
//	for (int i{1}; i<=10 ; i+=2)
//		std::cout << i << std::endl;
	
//	decrement one and one
//	for (int i{10}; i > 0; --i)
//		std::cout << i << std::endl;
	
/* 	for (int i{10}; i<=100; i+=10){
		if ( i % 15 == 0)
			std::cout << i << std::endl;
	}	 */
	
/* 	for (int i{1}, j{5} ; i <= 5; i++, ++j)
		std::cout << i << " + " << j << " = " << (i + j) << std::endl; */
	
//	for (int i {1}; i <= 100; ++i){
//		std::cout << i << (( i % 10 == 0) ? "\n":" ");
			
//	}

	//loop in vector
	
	std::vector <int> nums {10,20,30,40,50};
	for (unsigned i{0}; i < nums.size(); i++)
		std::cout << nums[i] << std::endl;
	
	return 0;
}