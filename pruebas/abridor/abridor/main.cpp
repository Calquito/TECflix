#include <iostream>
#include <fstream>
#include <stdio.h>
#include <curl.h>

using namespace std;

int main(){
    ifstream ip("C:/Users/Ana Luisa/Desktop/progra/pruebas/abridor/abridor/pelis.csv");
    string line;
    while(ip.good()){
        getline(ip,line,',');
        if (line.substr(0,4).compare(("http"))==0){
            cout<<line<<endl;
            //cout<<cont<<endl;
        }
    }
    ip.close();

    ////////////
      CURL *curl;
      CURLcode res;
      curl = curl_easy_init();
      if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
        res = curl_easy_perform(curl);

        /* always cleanup */
        curl_easy_cleanup(curl);
      }
      return 0;
}

