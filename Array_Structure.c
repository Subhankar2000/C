#include <stdio.h>
#include <string.h>
struct student
{
	int id;
	char name[20];
	float percentage;
} record[3];

int main()
{
	int i;
	record[0].id=1;
	strcpy(record[0].name, "Mahesh Panday");
	record[0].percentage = 86.5;

	record[1].id=2;
	strcpy(record[1].name, "Manisha Mukherjee");
	record[1].percentage = 70.0;

	record[2].id=3;
	strcpy(record[2].name, "Suresh Marar");
	record[2].percentage = 56.0;


	printf(" Marks List \n");
	printf("-- -- -- -- -- -- -- -- -- -- -- -- -- -\n");
	
	for (i = 0; i < 3; i++)
	{
		printf(" Id : %d \n", record[i].id);
		printf(" Name : %s \n", record[i].name);
		printf(" Percentage : %f \n\n", record[i].percentage);
	}

return 0;
}
