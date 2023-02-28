#include "main.h"

/**
 * rev_string -  prints a string in reverse
 *
 * @s: arg s
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, a = 0;
	char last_char;

	while (*s)
	{
	s++;
	i++;
	}
	for (a = 0; a < i; a++)
		s--;
	for (a = 0; a < (i / 2); a++)
	{
		int last = i - 1;

		last_char = s[last - a];
		s[last - a] = s[a];
		s[a] = last_char;
	}
}
