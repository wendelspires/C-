//Pointer

#include <iostream>


//function body
void subs (int *a, int *b){
	
	*a = *a + 1;
	*b = *b + 10;
}

int main(){
	
	int a = 5;
	int b = 10;

	subs(&a, &b);
	
	std::cout << "a: " << a << " b: " << b << std::endl;
	
	return 0;
}