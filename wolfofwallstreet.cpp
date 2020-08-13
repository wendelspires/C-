#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>

int main(){
	
	std::ifstream ifs ("wolfofwallstreet.json");
	
	Json::Reader reader;
	Json::Value obj;
	
	reader.parse (ifs,obj);		//reader can also read stringstream
	
	std::cout << "Movie: " << obj["Movie"].asString() << std::endl;
	std::cout << "Year: " << obj["Year"].asString() << std::endl;
	
	const Json::Value& characters = obj["Characters"]; // Array of characters
	
	for (int i=0; i < characters.size(); i++){
		
		std::cout << "       Name: " << characters[i]["name"].asString() << std::endl;
		std::cout << "       Chapter: " << characters[i]["chapter"].asString() << std::endl;
		
	}	
}