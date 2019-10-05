#include <iostream>
#include <fstream>
#include <stdio.h>
//#include <curl.h>

using namespace std;

 string get_line(int line_number){
     ifstream ip("/home/allan/Desktop/TECflix/urls_portadas.txt");
     string line;
     int cont=0;
     while(ip.good() and cont<line_number){
         getline(ip,line,'\n');
         cont++;
     }
    ip.close();
    return line;
}
