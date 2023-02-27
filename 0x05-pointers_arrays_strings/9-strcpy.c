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
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
