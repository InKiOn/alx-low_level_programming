/**
 * main - entry point function
 *
 * Description: Prints without printf and puts
 *
 * Return: Always 0 on success
 */

#include <unistd.h>
#include <sys/syscall.h>

int main(void)
{
	const char* message="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	syscall(SYS_write, STDERR_FILENO, message, sizeof(message) -1);
	return (0);
}
