//Rage-based FOR LOOP
#include <iostream>
#include <vector>
#include <iomanip>

int main (){
	
/* 	int scores[] {10,20,30};
	
	for (auto score: scores)
		std::cout << score << std::endl; */
	
/* 	std::vector <double> temperatures {87.9, 77.9, 80.0, 72.5};
	double average_temp {};
	double total {};
	
	for (auto temp: temperatures)
		total += temp;
	
	if (temperatures.size() != 0)
		average_temp = total/temperatures.size();
	
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Average Temperature is: " << average_temp << std::endl; */
	
/* 	for (auto val:{1,2,3,4,5})
		std::cout << val << std::endl; */
	
	/* for (auto c: "This is a test")
		
		if (c != ' ')
		std::cout << c; */
	
	for (auto c: "This is a test")
		if ( c == ' ')
			std::cout << "\t";
		else
			std::cout << c;
	
	
	std::cout << std::endl;
	
	return 0;
}