#include "holberton.h"
/**
 * print_last_digit - selects the last digit of an integer
 * @n: int type
 *
 * Return: the absolute value of last digit
 */
int print_last_digit(int n)
{
int ld;
if (n < 0)
{
	ld = -1 * (n % 10);
	_putchar(ld + '0');
	return (ld);
}
else
{
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
}
