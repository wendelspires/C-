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
  std::string readBuffer;

  curl = curl_easy_init();
  
  if(curl) {
    
	curl_easy_setopt(curl, CURLOPT_URL, "https://www.google.com.br/");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
	
	
	//set up the read callback with CURLOPT_READFUNCTION
	res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
	
	//res = curl_easy_perform(curl);
	//curl_easy_cleanup(curl);
	
  }
	return 0;
 }

