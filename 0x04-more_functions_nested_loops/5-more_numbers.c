#include "holberton.h"

/**
 * most_numbers - Print numbers 0 to 9, minus 2 and 4.
 * Description: use only _putchar
 */
void most_numbers(void)
{
	int a;
	int b;

	a = 0;
	while (a < 15)
	{
		b = 0;
		while (b <= 9)
		{
			if (b > 9)
			{
			_putchar(b / 10 + '0');
			}
			else
			{
				_putchar(b % 10 + '0');
			}
			b++;
		}

		a++;
	}
	_putchar('\n');
}
