#include "main.h"

/**
 * print_rev -  prints a string in reverse
 *
 * @s: arg s
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
	s++;
	i++;
	}
	while (i)
	{
	s--;
	_putchar(*s);
	i--;
	}
	_putchar('\n');
}
