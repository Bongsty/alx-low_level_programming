#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: Memory where is stored
 * @src: Memory where is copied
 * @n: Number of bytes
 *
 * Return: Copied memory with n byte changed
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
