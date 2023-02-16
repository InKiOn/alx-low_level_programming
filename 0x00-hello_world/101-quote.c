/**
 * main - entry point
 *
 * Description: Prints without printf and puts
 *
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	char mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(mess, 1, strlen(mess), stderr);
	return (0);
}
