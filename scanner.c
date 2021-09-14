#include "scanner.h"

int get_token(char vector[]) {
    
    int i = 0;
    char caracter; 
    
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

            while( (caracter != ',') && (caracter != EOF))
             {
                if(!isspace(caracter))
                {
                 vector[i] = caracter;
                 i++;
                }
               
                 caracter = getchar(); 
             }
               ungetc(caracter , stdin);
         
            vector[i]  = '\0';
            return CAD;
         } 

         

     }

        

} 
