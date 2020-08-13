#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>

int main(){
	
	std::ifstream ifs("profile.json");
	
	Json::Reader reader;
	Json::Value obj;
	
	reader.parse(ifs, obj);				//Reader can also read stringstream
	
	std::cout << "First Name: " << obj["first_name"].asString() << std::endl; 
	std::cout << "Last Name: " << obj["last_name"].asString() << std::endl;
		
	
	return 0;
}