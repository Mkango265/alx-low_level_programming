#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random +/- number each time it is executed
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive \n");
	}
	else if (n < 0)
	{
		printf("is negative \n");
	}
	else
	{
		printf("is zero \n");
	}
	return (0);
}
