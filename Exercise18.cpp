//Exercise18

#include <iostream>
#include <iomanip>

//prototype
int function_activation_count{0};
double a_penny_doubled_everyday(int, double amount = 0.01);

//Functions

void amount_accumulated(){
	double total_amount = a_penny_doubled_everyday(25);
	
	std::cout << "If a start with a penny and doubled it every da for 25 days, i will have $: " << std::setprecision(10) << total_amount << "\n";
}

double a_penny_doubled_everyday(int n, double amount){
	function_activation_count++;
	
	if (n <= 1)
		return amount;
	return a_penny_doubled_everyday(--n, amount*2);
}

int test_function_activation_count() {
	return function_activation_count;
}

int main (){
	
	a_penny_doubled_everyday(25,0.04);
	amount_accumulated ();
	
	return 0;
}