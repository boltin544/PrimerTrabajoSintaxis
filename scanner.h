#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int get_token(int i);
enum tokens {FDT, SEP, CAD}; // scanner.h
char vector[50];
int i = 0;

#endif

