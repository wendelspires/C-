//Variables and Constants

#include <iostream>

using namespace std;


int main(){
	
	int number_of_rooms;
	const float tax = 0.06;
	const int price_per_room = 30;
	
	cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
	cout << "How many rooms would you like cleaned? ";
	cin >> number_of_rooms;
	cout << endl;
	cout << endl;
	cout << "Our Prices" << endl;
	cout << "=============================" << endl << endl;
	cout << "Price per room: " << price_per_room << "%" << endl;
	cout << "Tax: " << tax << " $ " << endl << endl;
	
	float cost = (number_of_rooms * price_per_room);
	float taxes = (cost * tax);
	float total_estimate = ( cost + taxes);
	
	cout << "Cost: " << cost << endl;
	cout << "Taxes: " << taxes << endl;
	cout << "Total Estimate: " << total_estimate << endl;
	
	//cout << "Number of rooms: " <<  
	
	
	return 0;
	
	
}