#include "holberton.h"

/**
 * print_square - print hashes in pattern of size
 * @size: int type
 *
 * Return: prints hashes in squares
 */

void print_square(int size)
{
int a, b;
b = 1;
	while (b <= size)
	{
		a = 1;
		while (a <= size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
	if (size < 1)
		_putchar('\n');
}
