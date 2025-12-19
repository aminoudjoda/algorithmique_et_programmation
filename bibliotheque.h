#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#include <stdio.h>
#include <math.h>
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );

int permutation( int *a, int *b );
// Definition d'une fonction de permettant de resoudre une equation du second degre
void resoudreEquation(float a, float b, float c);



#endif
