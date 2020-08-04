//Session 6
// The size of operator

#include <iostream>
#include <climits>

using namespace std;

int main(){
		
	cout << "size of information" << endl;
	cout << "==========================" << endl;

	cout << "char: " << sizeof(char) << " bytes" << endl;
	cout << "int: " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "short: " << sizeof(short) << " bytes" << endl;
	cout << "long: " << sizeof(long) << " bytes" << endl;
	cout << "long long: " << sizeof(char) << " bytes" << endl;
	
	/************************************
	*Float Types
	************************************/
	
	cout << "==========================" << endl;
	
	cout << "float: " << sizeof(float) << " bytes" << endl;
	cout << "double: " << sizeof(double) << " bytes" << endl;
	cout << "long double: " << sizeof(long double) << " bytes" << endl;


	cout << "==========================" << endl;
	
	cout << "Size of using variables names" << endl;
	int age {21};
	cout << "age is " << sizeof (age) << " bytes" << endl;
	
	double wage {22.24};
	cout << "wage is: " << sizeof (wage) << " bytes " << endl;
	
}