//Exercise 10

#include <iostream>

int main(){
	
	int cents {};
	const int dollar {100};
	const int quarter {25};
	const int dime {10};
	const int nicle {5};
	const int penny {1};
	int balance {};
	
	
	//get how many each coins you get
	std::cout <<"Enter an amount in cents: " << std::endl;
	std::cin >> cents;

	//Calculate how many of each coin you get from cent input
	std::cout << "-------------------------" << std::endl;
	std::cout << "Solution without the modulo operator" << std::endl;
	std::cout << "-------------------------" << std::endl;

	int D = (cents/dollar);
	balance = (cents - D * dollar);
	
	int q = (balance/quarter);
	balance -= (q * quarter);
	
	int d = (balance/dime);
	balance -= (d * dime);
	
	int n = (balance/nicle);
	balance -= (n * nicle);
	
	int p = (balance/penny);
	balance -= (p * penny);
	
	//Display how many coins you can get from cent input
	std::cout << "Balance: " << balance << std::endl;
	std::cout << "Dollar: " << D << std::endl;
	std::cout << "Quarter: " << q << std::endl;
	std::cout << "Dime: " << d << std::endl;
	std::cout << "Nicle: " << n << std::endl;
	std::cout << "Penny: " << p << std::endl;
	
	//Calculate how many of each coin you get from cent input
	//std::cout << "-------------------------" << std::endl;
	//std::cout << "Solution with the modulo operator" << std::endl;
	//std::cout << "-------------------------" << std::endl;
	
	
	return 0;	
}