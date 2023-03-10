#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: The number of arguments supplied
 * @argv: An array of pointers to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}