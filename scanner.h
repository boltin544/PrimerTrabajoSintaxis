#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int get_token(char*);
enum tokens {FDT, SEP, CAD}; // scanner.h

#endif


