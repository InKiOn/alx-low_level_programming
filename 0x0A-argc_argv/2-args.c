#include <stdio.h>

/**
 * main - Prints arguments it receives
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}

	return (0);
}
