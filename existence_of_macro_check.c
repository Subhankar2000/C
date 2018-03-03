#include <stdio.h>
#define INCREMENT(x) ++x
int main()
{
	char *ptr = "RIncremented values ";
	int x = 10;
	#ifdef INCREMENT
	printf(" %s ", INCREMENT(ptr));
	#endif
	#ifdef INCREMENT
	printf(" %d", INCREMENT(x));
	#endif
	#ifdef INCREMENT
	printf(" %d", INCREMENT(x));
	#endif
	return 0;
}
