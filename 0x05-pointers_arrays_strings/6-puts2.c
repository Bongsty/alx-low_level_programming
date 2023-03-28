#include "main.h"
/**
 * puts2 - A function that should print only one character out of two
 * Starting with the first one
 * @str: Input
 * Return: Print
 */
void puts2(char *str)
{
int longj = 0;
int t = 0;
char *y = str;
int k;

while (*y != '\0')
{
y++;
longj++;
}
t = longj - 1;
for (k = 0; k <= t; k++)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
}
_putchar('\n');
}
