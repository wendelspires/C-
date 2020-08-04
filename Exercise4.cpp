//Challenge

#include <iostream>

int main (){
	
	int small_room;
	int large_room;
	const int price_small_room = 25;
	const int price_large_room = 35;
	const float tax_rate = 0.06;
	const int valid = 30;
	
	std::cout << "Franks Carpet Cleaning Service" << std::endl;
	std::cout << "How many small room would you like cleaned? ";
	std::cin >> small_room;
	
	std::cout << "How many large room would you like cleaned? ";
	std::cin >> large_room;
	
	int total_small_rooms = (price_small_room * small_room);
	int total_large_rooms = (price_large_room * large_room);
	int cost = (total_large_rooms + total_small_rooms);
	double total_taxes = (cost * tax_rate);
	double estimate = (cost + total_taxes);
	
	std::cout << "Estimate for carpet cleaning service" << std::endl;
	std::cout << "Number of small rooms: " << small_room << std::endl;
	std::cout << "Number of large rooms: " << large_room << std::endl;
	std::cout << "Price per small rooms: " << price_small_room << std::endl;
	std::cout << "Price per large rooms: " << price_large_room << std::endl;
	std::cout << "Cost: " << cost << std::endl;
	std::cout << "Tax :" << tax_rate << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << "Total Estimate: " << estimate << std::endl;
	
	return 0;
	
}