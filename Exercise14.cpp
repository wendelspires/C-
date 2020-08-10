//Exercise 14
//Range-based for loops

#include <iostream>
#include <vector>

int main (){
	
	int count {};
	
	std::vector <int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
	
	for (auto check:vec){
		if( check % 3 == 0 && check % 5 == 0)
			count += check;
	}
	
	std::cout << "The count is: " << count << std::endl;
	
	for (auto num:vec){
		if (num % 3 == 0 && num % 5 == 0)
			std::cout << "The numbers are: " << num << std::endl;
	}
	
	return 0;
}