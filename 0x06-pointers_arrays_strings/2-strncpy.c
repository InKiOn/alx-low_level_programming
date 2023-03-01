#include "main.h"

/**
 * _strncpy - char function
 * @src: pointer value of string to be copy
 * @dest: pointer value of string to copy to
 * @n: most number of bytes to use
 *
 * Description: Concatenates two strings
 *
 * Return: dest (the resulting string pointer)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
