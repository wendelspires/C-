//Exercise 16

#include <iostream>
#include <vector>

int main (){
	
	std::vector <int> vec {1,2,3};
	
	int result {};
	if (vec.size() <= 1 ){
		return result;
	}
	else
	{
		for (unsigned i {}; i < vec.size() - 1; i++)
			{
				for (unsigned j {i + j}; j < vec.size(); j++)
				{
						result += vec[i]*vec[j];
				}
			}
	}

	return 0;
	
}