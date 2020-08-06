//Compound assignment Operators
/*
	a += 1; // a = a + 1;
	a /= 5; // a = a / 5;
	a *= b + c ; // a = a*(b + c);

	cost += items * tax; // cost = cost + (items * tax);
*/

#include <iostream>

int main (){
	
	int age {};
	bool parental_consent {false};
	bool ssn {false};
	bool accidents {false};

	if ((age >= 18 || age > 15 && parental_consent) && ssn && !accidents)
		std::cout << "Yes, you can work! ";
	
	return 0;

}