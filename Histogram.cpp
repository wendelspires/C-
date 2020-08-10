//Nested Loops - Histogram

#include <iostream>
#include <vector>

int main (){
	
	int num_items{};
	
	std::cout << "How many data items do you have? ";
	std::cin >> num_items;
	
	std::vector <int> data {};
	
	for (int i{1}; i<=num_items; i++){
		int data_item {0};
		std::cout << "Enter data item " << i << ": ";
		std::cin >> data_item;
		data.push_back(data_item);
	}
	
	std::cout << "\nDisplay Histogram" << std::endl;
	for (auto val:data){
		for (int i{1} ; i <= val; i++){
		std::cout << "-";	
		}
		std::cout << std::endl;
	}
	
	return 0;
}