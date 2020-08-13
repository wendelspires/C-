#include <iostream>
#include <curl/curl.h>
#include <string>

size_t writeFunction(void* ptr, size_t size, size_t nmemb, std::string* data){
	
	data->append((char*)ptr, size*nmemb);
	return size * nmemb;
}

int main (int argc, char** argv){
	
	curl_global_init(CURL_GLOBAL_DEFAULT);
	auto curl = curl_easy_init();
	
	if (curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, "https://httpbin.org/get");
		curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
		curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 50L);
		curl_easy_setopt(curl, CURLOPT_TCP_KEEPALIVE, 1L);
		
		std::string response_string;
		std::string header_string;
		
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);
        curl_easy_setopt(curl, CURLOPT_HEADERDATA, &header_string);
			
		curl_easy_perform(curl);
		std::cout << response_string;
		curl_easy_cleanup(curl);
        curl_global_cleanup();
        curl = NULL;
	}
	return 0;	
}