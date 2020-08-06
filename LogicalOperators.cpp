//Logical Operators
// 
#include <iostream>

int main (){
	
	int num {};
	const int lower{10};
	const int upper {20};
	
	std::cout << std::boolalpha;
	
	//Determine if an entered integer is between two other integers
	//assume lower < upper
	//std::cout << "Enter an integer - The bounds are " << lower << " and " << upper << ":";
	//std::cin >> num;
	
/*	bool within_bounds {false};
	
	within_bounds = (num > lower && num < upper);
	std::cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << std::endl;
*/
	
/*
	bool outside_bounds {false};
	
	outside_bounds = ( num < lower || num > upper );
	std::cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << std::endl;
*/	
	
/*	bool in_bounds {false};
	
	in_bounds = (num == lower || num == upper);
	std::cout << num << " Is on one of the bounds which are" << lower << " and " << upper << " : " << in_bounds << std::endl;
*/

	//Determine is you need to wear a coat based on temperature and wind speed
	bool use_coat {false};
	double temperature {};
	int wind_speed {};
	
	const int wind_speed_for_coat {25};
	const int temperature_for_coat {45};
	
	std::cout << "Enter a temperature with spaces: " << std::endl;
	std::cin >> temperature;
	std::cout << "Enter a Wind Speed with spaces: " << std::endl;
	std::cin >> wind_speed;
	
	use_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
	std::cout << "Use coat AND? " << use_coat << std::endl;

	use_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
	std::cout << "Use coat OR? " << use_coat << std::endl;

	return 0;
}