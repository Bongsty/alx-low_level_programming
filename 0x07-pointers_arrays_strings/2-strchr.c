#include "main.h"
/**
 * _strchr - Entry point
 * @s: Input
 * @c: Input
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int g = 0;
int h = n;
for (; g < h; g++)
{
dest[g] = src[g];
n--;
}
return (dest);
}
