#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: array tobe printed
 * @n: number of elements in array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	putchar('\n');
}
