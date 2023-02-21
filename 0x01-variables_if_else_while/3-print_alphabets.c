#include <stdio.h>
/**
 * main - Program entry
 * Description - Program to print alphabet in lower&uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int a = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (a <= 90)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
