#include "main.h"

/**
 * _strlen - int function
 * @s: char type whose value is read
 *
 * Description: returns the length of s
 *
 * Return: legth of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
