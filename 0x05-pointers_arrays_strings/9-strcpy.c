#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src
 * @dest: buffer to copy string to.
 * @src: source string to copy.
 *
 * Description: copies a string
 *
 * Return: pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\n')
	{
		dest [i] = src[i];
	}

	return (dest);
}
