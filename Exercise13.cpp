//For Loop Exercise

#include <iostream>

int calculate_sum (){
	
	int sum{0};
	
	for (int i=1; i<=15; i++){
		if ( i % 2 != 0){
			sum += i;
		}
	}
	
	std::cout << "The result of Sum : " << sum << std::endl;
	
	return 0;
}
	
	
	
	
