//Exercise 3

#include <iostream>
#include <string>

using namespace std;

int main(){

//name, age, hourly_wage

int age {0};
double hourly_wage {23.50};
string name;
	
	cout << "Whats your name?: ";
	cin >> name;
	cout << "Your age: ";
	cin >> age;
	cout << "Name: " << name << "\nAge: " << age << "\nHourly_Wage: " << hourly_wage << std::endl;
	
return 0;
}