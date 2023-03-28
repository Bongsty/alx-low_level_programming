#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
