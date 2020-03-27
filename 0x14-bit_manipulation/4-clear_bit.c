#include "holberton.h"

/**
 * clear_bit - function to set a bit at given indext to 1
 * @n: int pointer
 * @index: index at bit to change
 * Return: 1 if sucessful -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index  < sizeof(n) *  8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
