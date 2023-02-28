#include "main.h"

/**
 * puts2 -  prints a string
 *
 * @str: arg *str
 *
 * Return: string to stdout
 */

void puts2(char *str)
{
	int i = 0, a;

	while (*str)
	{
	i++;
	str++;
	}
	for (a = 0; a < i; a++)
		str--;
	for (a = 0; a < i ; a++)
	{
		if (a % 2 == 0)
		_putchar(str[a]);
	}
	_putchar('\n');
}
