#include "main.h"

/**
 * _strncat - Concatenate two strings
 * using at most n bytes from src
 * @dest: Input Value
 * @n: Input Value
 * Return: dest
 */
char *_strncat(cahr *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] !+'\0';)
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0)
	{
	dest[a] = src[j];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
