# include <stdio.h>
int main( )
{
	FILE *fp ;
	char data[50] ;
	printf( "Opening the file sample.c in read mode" ) ;
	fp = fopen( "sample.c", "r" ) ;
	if ( fp == NULL )
	{
		printf( "Could not open file sample.c\n" ) ;
		return 1;
	}
	printf( "Reading the file sample.c\n" ) ;
	while( fgets ( data, 50, fp ) != NULL )
	printf( "%s" , data ) ;
	printf("Closing the file sample.c\n") ;
	fclose(fp) ;
	return 0;
}
