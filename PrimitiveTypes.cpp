//Section 6
//Global and local variables

#include <iostream>

using namespace std;

int age {18}; // global variables

int main() {
//	int age {16}; //local variables
//	cout << age endl;


    /************************************
	*Character Type
	************************************/
	
	char middle_intial {'W'}; //Aspas simples
	cout << "My middle initial is " << middle_intial << endl;
	
	
	/************************************
	*Integer Types
	************************************/
	
	
	unsigned short exam_score {55};
	cout << "My exame score was " << exam_score << endl;
	
	int countries_represented {65};
	cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

	long people_in_florida {20610000};
	cout << "There are about " << people_in_florida << " people in florida" << endl;
	
	long people_on_earth {7'600'000'000};
	cout << "There are about " << people_on_earth << " people in earth" << endl;
	
	long long distance_to_alpha_centauri {9'461'000'000'000};
	cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
	
	
	/************************************
	*Integer Types
	************************************/
	
	float car_payment {401.23};
	cout << "My car payment is " << car_payment << endl;
	
	double pi {3.14159};
	cout << "The number of the PI is: " << pi << endl;
	
	long double large_amount {2.1e120};
	cout << large_amount << " is a very big number" << endl;
	
	
	/************************************
	*Boolean Type
	************************************/
	
	bool game_over {false};
	cout << "The value of Game Over is: " << game_over << endl;
	
	
	/************************************
	*OverFlow Example
	************************************/
	
	int value1 {3000};
	int value2 {1000};
	int product {value1 * value2};
	
	cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;	
	
	return 0;
}