//Functions

#include <iostream>
#include <string>
#include <vector>
/*int add_numbers (int,int) // prototype

int main (){
	
	int result {0};
	result = add_numbers (100,200); // call the function
	result 0;
}

int add_numbers (int a, int b){    //Definition
	return a + b;

}
*/

void pass_by_value1 (int num);          						// prototypes
void pass_by_value2 (std::string s);							// prototypes
void pass_by_value3 (std::vector <std::string> v);				// prototypes
void print_vector (std::vector <std::string> v);


void pass_by_value1 (int num){
	num = 1000;
}

void pass_by_value2 (std::string s){
	s = "Changed";
}

void pass_by_value3 (std::vector<std::string> v){
	v.clear(); //delete all vector elements
}

void print_vector (std::vector < std::string> v){
	for (auto s: v)
		std::cout << s << " ";
	std::cout << std::endl;
}

int main (){
	
	int num {10};
	int another_num {20};
	
	std::cout << "Num before calling pass_by_value1: " << num << std::endl;
	pass_by_value1(num);
	std::cout << "Num after calling pass_by_value1: " << num << std::endl;
	
	std::cout << "\nanother_num before calling pass_by_value1: " << another_num << std::endl;
	pass_by_value1(another_num);
	std::cout << "\nanother_num after calling pass_by_value1: " << another_num << std::endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}