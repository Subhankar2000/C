# include <stdio.h>
# include <string.h>
int main( )
{
	FILE *fp ;
	char data[50];

	// opening an existing file

	printf( "Opening the file sample.c in write mode\n" ) ;
	fp = fopen("sample.c", "w") ;
	if ( fp == NULL )
	{
		printf( "Could not open file sample.c" ) ;
		return 1;
	}

	printf( "\n Enter some text from keyboard” \
	“ to write in the file sample.c\n" ) ;
	// getting input from user

	while ( strlen ( gets( data ) ) > 0 )
	{
		// writing in the file
		fputs(data, fp) ;
		fputs("\n", fp) ;
	}

	// closing the file
	printf("Closing the file sample.c\n") ;
	fclose(fp) ;
	return 0;
}
