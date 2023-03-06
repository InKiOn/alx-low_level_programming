#include "main.h"

/**
 * _strstr - char function
 * @haystack: string that will be checked
 * @needle: the substring to check
 *
 * Description: Locates a substring
 *
 * Return: pointer to the beginning of the located string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index = 0;

	if(*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		if (haystack[index] == needle[index])
		{
			while (haystack[index] == needle[index])
			{
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}
				index++;
			}
		}
	}
	return ('\0');
}
