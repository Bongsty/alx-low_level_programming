#include "main.h"
/**
 * _strchr - Entry point
 * @s: Input
 * @c: Input
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int g = 0;
for (; s[g] >= '\0'; g++)
{
if (s[g] == c)
return (&s[g]);
}
return (0);
}
