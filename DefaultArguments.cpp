//Defaut Arguments

#include <iostream>
#include <iomanip>
#include <string>


//Functions prototype
double calc_cost (double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);

void greeting (std::string name, std::string prefix = "Mr.", std::string suffix = "");

//Functions body

double calc_cost (double base_cost, double tax_rate, double shipping){
	
	return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting (std::string name, std::string prefix, std::string suffix){
		
	std::cout << "Hello " << prefix + " " + name + " " + suffix << std::endl;
}



//Int Main
int main (){
	
	double cost{0};
	cost = calc_cost (100.0,0.08,4.25);				//will use no defaults 100 + 8 + 4.25
	
/*	std::cout << std::fixed << std::setprecision(2);			//112.25
	std::cout << "Cost is: " << cost << std::endl; 
	
	cost = calc_cost (100.0,0.08);					//will use default shipping (3.50)
	std::cout << "Cost is: " << cost << std::endl;
	
	cost = calc_cost (200);
	std::cout << "Cost is: " << cost << std::endl;
	
	cost = calc_cost();
	std::cout << "Cost is: " << cost << std::endl;
*/
	greeting ("Gleen Jones","Dr.","M.D");
	greeting ("Wendel Suzano Pires - ", "Dr.", "CNPI-T");
	
	return 0;
}