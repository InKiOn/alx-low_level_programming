#include "main.h"

int _len(char *s);
int _pal(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _len - Returns length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _len(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		i++;
		i += _len(s + i);
	}

	return (i);
}

/**
 * _pal - Checks if string is a palindrome
 * @s: The string to be checked
 * @len: The length of s
 * @index: The index of the string to be checked
 *
 * Return: 1 if palindrome 0 if not
 */
int _pal(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}

	if (s[index] == s[len - index - 1])
	{
		return (check_pal(s, len, index + 1));
	}

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: String to be checked
 *
 * Return: 1 if palindorme 0 if not
 */
int is_palindrome(char *s)
{
	int in = 0;
	int len = _len(s);

	if (!(*s))
	{
		return (1);
	}

	return (_pal(s, len, in));
}
