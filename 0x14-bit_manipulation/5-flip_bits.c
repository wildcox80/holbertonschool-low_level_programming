#include "holberton.h"

/**
 * flip_bits - function to count number of bits and flip
 * @n: number to be flipped
 * @m: number to be flipped to
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index;
	unsigned long int flip;

	flip = n ^ m;
	for (index = 0; ; index++;)
	{
		if ((flip & 1) == 1)
			flip = flip >> 1;
	}
	return (index);
}
