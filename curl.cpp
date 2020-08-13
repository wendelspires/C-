#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>

int main(int, char **){
	
	try
	{
		//That's all that is need to do cleanup of used resources
		curlpp::Cleanup myCleanup;
		
		//Our request to be sent
		curlpp::Easy myReqyest;
		
		//Set the URL
		myRequest.setOpt<Url>("http://example.com");
		
		//send request and get a result.
		//By default the result goes to standard output.
		myRequest.perform();
	}
	
	catch(curlpp::RuntimeError & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	catch (curlpp::LogicError & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}