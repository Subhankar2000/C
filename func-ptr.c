#include <stdio.h>

int sum ( int num1 , int num2) {
	return num1+num2 ;
}

int main() {
	int (*fp) (int , int) ;
	fp = sum ;
	
	int result = fp ( 10 , 5 ) ;
	printf("result call using function pointer : %d" , result ) ;
	return 0 ;
}
