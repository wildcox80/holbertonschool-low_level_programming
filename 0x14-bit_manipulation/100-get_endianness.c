#include "holberton.h"

/**
 * get_endianness - function to check endianness  of  machine
 * Return: 1 if Little Endian or 0 if big Endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);
}
