#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "scanner.h"

//cambiar
int main() {
   
    enum tokens { FDT, SEP, CAD, SPA };
    const char* tokens[3] = {"Fin De Texto:", "Separador", "Cadena"};
    char caracter; 
    int tipoCaracter;
    
    caracter = getchar();
    
    while(caracter != EOF) 
    {
        if(!isspace(caracter)) 
        {
           if(caracter == ','){
                
               tipoCaracter = SEP;
               printf(tokens[tipoCaracter]);
               printf(": %c", caracter ," \t\n");   
            }
           
           else if(caracter == EOF){
               tipoCaracter = FDT;
           }
           else{
               tipoCaracter = CAD;
               printf(tokens[tipoCaracter]);
               printf(": %c", caracter , " \t\n");
           
           }
        }
    
            printf("\n");
    
        caracter = getchar();
    } 

    printf(tokens[FDT]);
     
   return 0;
}
