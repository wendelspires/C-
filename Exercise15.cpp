//Exercise 15
//While loops

#include <iostream>
#include <vector>

int main (){
	
	std::vector <int> vec;
	
	int count {};
	
	for (auto v:vec){
		if (v != -99){
			count += v;
		}
		else{
			break;
		}
	}
	
	
	
	return 0;
}