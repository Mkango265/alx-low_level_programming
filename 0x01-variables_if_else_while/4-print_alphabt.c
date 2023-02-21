#include <stdio.h>
/**
 * main - Entry point
 * description - Program to print lowercase alphabet except q & e
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
		continue;
		}
		putchar(a);
		a++;
}
putchar('\n');
	return (0);
}
