#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "scanner.h"

int get_token(int i) {

    char caracter; 
    int tipoCaracter;
    
    caracter = getchar();
     
    if(!isspace(caracter)) 
     {
         if(caracter == ',')
         {
            return SEP; 
         }
        else
         {
            vector[i] = caracter;
            i++;

            while((caracter = getchar()) != ',')
             {
                 caracter = getchar();
                 vector[i] = caracter;
                 i++;
             }
             
            return CAD;
         } 
             
     }
   
    
      } 



 
    
            