#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: Input
 * @accept: Input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accecpt[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
			s++;
		}
		return ('\0');
	}
}
