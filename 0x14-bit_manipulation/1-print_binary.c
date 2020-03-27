#include "holberton.h"

/**
 * print_binary - convert a number to binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}

	/* Invoque Function and right shift */
	print_binary(n >> 1);

	/** (n & 1) Check if integer n is odd */
	putchar('0' + (n & 1));
}
