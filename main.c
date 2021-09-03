#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "scanner.h"

int main(int argc,char **argv) {

const char* tokens[3] = {"Fin De Texto:", "Separador", "Cadena"}; //main.c
enum tokens token;

printf("ingresa el texto : ");
printf("-------------------\n");
    do
    {  
        token = get_token(i);           
        switch(token)
        {
            case FDT:
            printf(tokens[FDT]);             
            break;
            case SEP:
            printf(tokens[SEP]);
            printf(": %c", " , " , " \t\n");  
            break;
            case CAD:
            printf(tokens[CAD]);
            for(int j = 0 ; j < i ; j++) 
              {
                printf(": %c", vector[j]); 
              }
            i = 0 ;
        }
    } while(token != EOF);

     printf(tokens[FDT]);
   
	return 0;
}

