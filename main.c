#include "scanner.h"

int main(int argc, char *argv[]) {

const char* tokens[3] = {"Fin De Texto : ", "Separador : ", "Cadena : "}; 
enum tokens token;
char vector[50];

printf("ingresa el texto : ");
printf("-------------------\n");
    do
    {  
        token = get_token(vector);           
        switch(token)
        {
            case SEP:
            printf(tokens[SEP]);
            printf(" ,  \t\n");  
            break;
            case CAD:
            printf(tokens[CAD]);
            for(int j = 0 ; vector[j] != '\0' ; j++) 
              {
                printf("%c", vector[j]); 
              }
            printf("\n");  
        }
    } while(token != EOF);

     printf(tokens[FDT]);
   
	return 0;
}