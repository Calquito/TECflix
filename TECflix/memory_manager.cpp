#include "memory_manager.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "paginacion.h"

extern int in_memory[3]={0,0,0};

/**
 * @brief obtiene la linea que indica la cantidad de memoria consumida
 * @param line es la linea con la memoria consumida
 * @return retorna la longitud de la linea obtenida
 */
int parseLine(char* line){
    // This assumes that a digit will be found and the line ends in " Kb".
    int i = strlen(line);
    const char* p = line;
    while (*p <'0' || *p > '9') p++;
    line[i-3] = '\0';
    i = atoi(p);
    return i;
}
/**
 * @brief obtiene el valor de memoria utilizada en kb
 * @return retorna el resultado de la linea obtenida
 */
int getValue(){ //Note: this value is in KB!
    FILE* file = fopen("/proc/self/status", "r");
    int result = -1;
    char line[128];

    while (fgets(line, 128, file) != NULL){
        if (strncmp(line, "VmSize:", 7) == 0){
            result = parseLine(line);
            break;
        }
    }
    fclose(file);
    return result;
}
/**
 * @brief carga las paginas en memoria
 * @return nada
 */
void charge_pages(){
    if(pagina_3>2 and pagina_3<502){
        in_memory[0]=pagina_3-1;
        in_memory[1]=pagina_3;
        in_memory[2]=pagina_3+1;
    }
    else if(pagina_3<2 and pagina_3<502){
        in_memory[0]=504;
        in_memory[1]=pagina_3;
        in_memory[2]=pagina_3+1;

    }
    else if(pagina_3>2 and pagina_3>502){
        in_memory[0]=pagina_3-1;
        in_memory[1]=pagina_3;
        in_memory[2]=1;

    }

}
