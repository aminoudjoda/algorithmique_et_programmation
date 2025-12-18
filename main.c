
int main( void ) {
int result = power( 2, 3 );
printf( "2³ == %d\n", result );
result = fact( 6 );
printf( "6! == %d\n", result );

int first = 10;
int second =16;
printf("first=%d , second=%d\n", first, second);
permutation(&first,&second);
printf("first=%d , second=%d", first, second);

return EXIT_SUCCESS;
}