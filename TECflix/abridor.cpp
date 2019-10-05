#include <iostream>
#include <fstream>
#include <stdio.h>
//#include <curl.h>

using namespace std;
/**
 * @brief obtiene el url de una imagen o un video desde la base de datos
 * @param line_number es el numero de la linea que se desea obtener
 * @param file indica cual archivo se debe abrir
 * @return retorna un string con la url solicitada
 */
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
