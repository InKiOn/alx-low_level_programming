#include "main.h"

/**
 * _strpbrk - unsigned int function
 * @s: segment that will be checked
 * @accept: the bytes to check
 *
 * Description: Searches a string for any of a set
 *
 * Return: pointer to the byte that matces one in accept or NULL
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if(*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}
	return (bytes);
}
