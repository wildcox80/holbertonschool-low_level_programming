#include "holberton.h"

/**
 * more_numbers - Print numbers 0 to 9, minus 2 and 4.
 * Description: use only _putchar
 */
void more_numbers(void)
{
int a;
int b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
