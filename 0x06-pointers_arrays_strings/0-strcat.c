#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Input the value
 * @src: Input the value
 * Return: Void
 */
char *_strncat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0)
	{
a++;	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
