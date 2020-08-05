 //Assignment Operator
 
 #include <iostream>
 
 int main (){
	 
	int num1 {200};
	int num2 {100};
	
	//num3 = num1 + num2;
	
	std::cout << "Num 1 is: " << num1 << std::endl;
	std::cout << "Num 2 is: " << num2 << std::endl;
	
	std::cout << num1 << " + " << num2 << " = " << num1+num2 << std::endl;
	std::cout << num1 << " - " << num2 << " = " << num1-num2 << std::endl;
	std::cout << num1 << " * " << num2 << " = " << num1*num2 << std::endl;
	std::cout << num1 << " / " << num2 << " = " << num1/num2 << std::endl;
	
	num1 = 10;
	num2 = 3;
	
	std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
	
	
	return 0; 
	 
 }