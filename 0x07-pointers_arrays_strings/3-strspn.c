#include "main.h"

/**
 * _strspn - Entry point
 * @s: Input
 * @accept: Input
 * Return: Alwaays 0(Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
			{
				g++;
				break;
			}
			else if (accept[g + 1] == '\0)
				return (n);
		}
		s++;
	}
	return (g)i;
	}
