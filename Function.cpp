//Functions

#include <iostream>


const double pi {3.14159};

double calc_area_circle(double radius){
	return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height){
		
	return pi * radius * radius * height;
	
}

void area_circle(){
	double radius{};
	std::cout << "\nEnter the radios of the circle: ";
	std::cin >> radius;
	
	std::cout << "The area of a circle with radios " << radius << " is " << calc_area_circle(radius) << std::endl;
}

void volume_cylinder(){
	double radius {};
	double height {};
	std::cout << "\nEnter the radios of the cylinder: ";
	std::cin >> radius;
	
	std::cout << "\nEnter the height of the cylinder: ";
	std::cin >> height;
	
	std::cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius,height) << std::endl;	
}

int main (){
	
	area_circle();
	volume_cylinder();


	return 0;
}