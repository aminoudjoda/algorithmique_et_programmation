#include "bibliotheque.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}
int permutation(int *a,int *b){
    int c=0;
    c=*a;
    *a=*b;
    *b=c;
}

void resoudreEquation(float a, float b, float c)
{
    float delta, x1, x2;

    if (a == 0)
    {
        printf("Ce n'est pas une equation du second degre.\n");
    }
    else
    {
        delta = b*b - 4*a*c;

        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Deux solutions reelles : x1 = %.2f et x2 = %.2f\n", x1, x2);
        }
        else if (delta == 0)
        {
            x1 = -b / (2*a);
            printf("Une solution reelle double : x = %.2f\n", x1);
        }
        else
        {
            printf("Pas de solution reelle.\n");
        }
    }
}






