//Exercise 18

#include <iostream>

//Function to convert fahrenheit to celsius. Without Void, we have to use return;
double fahrenheit_to_celsius (double fahrenheit){
		
		double celsius;		
		celsius = (fahrenheit - 32.0) * 5.0/9.0;
		return celsius;
}

double fahrenheit_to_kelvin (double fahrenheit){
		
		double kelvin;
		kelvin = (fahrenheit - 32) * 5/9 + 273.15;
		return kelvin;
}

int main (){
	
	double fahrenheit;
	
	std::cout << "Enter temperature in fahrenheit (in degress): ";
	std::cin >> fahrenheit;
	std::cout << "The temperature in Celsius (in degress) = " << fahrenheit_to_celsius(fahrenheit) << std::endl;
	std::cout << "The temperature in Kelvin (in degress) = " << fahrenheit_to_kelvin(fahrenheit) << std::endl;


	return 0;
}