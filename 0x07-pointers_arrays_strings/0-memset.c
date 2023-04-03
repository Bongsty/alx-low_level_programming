#include "main.h"
/**
 * _memset - Fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: The desired value
 * @n: The number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int z = 0;
for (; n > 0; z++)
{
s[z] = b;
n--;
}
return (s);
}
