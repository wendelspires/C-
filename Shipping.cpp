//Shipping

#include <iostream>

int main (){
	
	int length, width, height {};
	double base_cost {2.50};
	
	const int tier1_threshold {100}; // volume
	const int tier2_threshold {500}; // volume
	
	int max_dimension_length {10}; // inches
	
	double tier1_surcharge {0.10}; // 10% extra
	double tier2_surcharge {0.25}; // 25% extra

	std::cout << "=================================================" << std::endl;
	std::cout << "Shipping Cost Calculator" << std::endl;
	std::cout << "=================================================" << std::endl;	
	
	std::cout << "Enter a length of the package: ";
	std::cin >> length;
	
	std::cout << "Enter a width of the package: ";
	std::cin >> width;
	
	std::cout << "Enter a height of the package: ";
	std::cin >> height;
	
	int package_volume{};
	
	if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
		std::cout << "Sorry, package rejected! - Dimension Exceeded" << std::endl;
	}
	else{
		double package_cost {};
		
		package_volume = length * width * height;
		package_cost = base_cost;
		
		if (package_volume > tier2_threshold){
			package_cost += package_cost * tier2_surcharge;
			std::cout << "Adding tier 2 surcharge" << std::endl;	
		}
		else if (package_volume > tier1_threshold){             // with 2 conditions we need use ELSE IF
			package_cost += package_cost * tier1_surcharge;
			std::cout << "Adding tier 1 surcharge" << std::endl;
		}	
		
		std::cout << "The volume of your package is: " << package_volume << std::endl;
		std::cout << "Your package will cost $: " << package_cost << " to ship" << std::endl;
		
	}
	return 0;
}