#include <unistd.h>
/**
 * _putchr - Writes the character c to stdout
 * @c: The character to print
 * Return: 1 on success
 * Return 0: on error
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
