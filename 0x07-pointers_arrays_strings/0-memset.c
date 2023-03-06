#include "main.h"

/**
 * _memset - char function
 * @s: pointer value of string to be filled
 * @b: constant byte to be used to fill
 * @n: number of bytes of memory area
 *
 * Description: Fills memory with a constant byte
 *
 * Return: s (pointer to the memory area)
 */

char *_memset(char *s, char *b, unsigned int n)
{
	int in;

	for (in = 0; n > 0; in++)
	{
		s[in] = b;
		n--;
	}

	return (s);
}
