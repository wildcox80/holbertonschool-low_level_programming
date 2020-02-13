#include "holberton.h"

/**
 * print_line - Print draws a straight line in the terminal.
 * @n : int type n
 * Description: use only _putchar
 */

void print_line(int n)
{
int c;
c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar(10);
}
