#include <iostream>

int main(){
	
	int arr[10] {};
	arr[0] = 100;
	arr[8] = 1000;
	
	std::cout << "\nThe first element of the array is: " << arr[0] << std::endl;
	std::cout << "\nThe last element of the array is: " << arr[9] << std::endl;
}
