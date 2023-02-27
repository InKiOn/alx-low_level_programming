#include "main.h"

/**
 * rev_string - void function
 * @s: string to be reversed
 *
 * Description: reverses a string
 */

void rev_string(char *s)
{
	int i, n, c;
	char *t, k;

	t = s;
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			n = i;
		}
		for (c = 0; c <= ((i + 1) / 2); c++)
		{
			k = s[n];
			s[n] = t[c];
			t[c] = k;
			n--;
		}
	}
}
