#include "main.h"

/**
 * _isalpha - int function
 * @c: the parameter to be checked
 *
 * Definition: Checks if it's a letter wether lowercase or uppercase
 *
 * Return: 1 if is lowercase 0 if not
 *
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}
