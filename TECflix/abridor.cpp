#include <iostream>
#include <fstream>
#include <stdio.h>
//#include <curl.h>

using namespace std;

 string get_line(int line_number,int file){
     if(file==1){
         ifstream ip("/home/allan/Desktop/TECflix-master/TECflix/urls_portadas.txt");
         string line;
         int cont=0;
         while(ip.good() and cont<line_number){
             getline(ip,line,'\n');
             cont++;
         }
        ip.close();
        return line;
     }
     else {
         ifstream ip("/home/allan/Desktop/TECflix-master/TECflix/urls_pelis.txt");
         string line;
         int cont=0;
         while(ip.good() and cont<line_number){
             getline(ip,line,'\n');
             cont++;
         }
        ip.close();
        return line;
     }
}
