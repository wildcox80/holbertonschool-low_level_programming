#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: pointer to an array
 * @n: int type
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int b, c, temp;

	for (b = 0, c = n - 1; c >= b; b++, c--)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
	}
	for (b = 0; b < n; b++)
	;
}
