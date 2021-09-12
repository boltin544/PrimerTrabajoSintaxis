#include "scanner.h"

int get_token(char* vector) {
    
    int i = 0;
    char caracter; 
    int tipoCaracter;
    char caracterAnterior;
    int h = 0;

    caracter = getchar();

    if(!isspace(caracter)) 
     {
         if(caracter == ',')
         {
            return SEP; 
         }
         
         else if(caracter == EOF)
         {
            return FDT; 
         }
         
         else
         {
            *(vector + i) = caracter;
            i++;

            while((caracter = getchar()) != ',')
             {
                 *(vector + i) = caracter;
                 i++;
             }

             caracterAnterior = caracter;
             h++;

            *(vector + i)  = '\0';
            return CAD;
            

         } 
    
     }

        if(h > 0)
         {
         
        if(caracterAnterior == ',')
         {
            return SEP; 
         }
         
         else if(caracterAnterior == EOF)
           {
            return FDT; 
         }


           h = 0;

         }

} 


/*

OPCIONES : crear un caracter anterior para el while porque hay uno que pasa por alto , el tema es como
            - uso un h++
            - arriba del primer getchar
            - abajo de todo
            - o que podria hacer?


*/
 
    
            