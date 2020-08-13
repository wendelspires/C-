#include <iostream>
#include <string>
#include <curl/curl.h>


static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main(void)
{
	CURL *curl;
	CURLcode res;

	curl_global_init(CURL_GLOBAL_ALL);
	
	curl = curl_easy_init();
  
  if(curl) {
	
	curl_easy_setopt(curl, CURLOPT_POST, "https://httpbin.org/post/");
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=Wendel&project=curl");
		
	res = curl_easy_perform(curl);
	curl_easy_cleanup(curl);
	
	std::cout << "OK? " << curl_easy_strerror(res) << std::endl;
	
	}
	
	return 0;
 }