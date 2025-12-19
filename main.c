#include <stdio.h>
#include <stdlib.h>

#include "bibliotheque.h"
int main( void ) {
int result = power( 2, 3 );
printf( "2³ == %d\n", result );
result = fact( 6 );
printf( "6! == %d\n", result );

// int a = 2;
// int b =2;
// printf("a=%d , b=%d\n", a, b);
// permutation(&a,&b);
// printf("a=%d , b=%d", a, b);
float a = 2;
float b =2;
float c=0;
float x1=0;
float x2=0;


    resoudreEquation(a, b, c);
    return 0;



return EXIT_SUCCESS;
}