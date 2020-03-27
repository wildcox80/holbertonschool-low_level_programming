#include "holberton.h"

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: pointer to char string input
 * Return: always successful
 */

/* Function Prototype */
unsigned int binary_to_uint(const char *b)

{
	/* Variables */
	unsigned int x = 0;
	unsigned int y = 1;
	int z;
	/* condition is b == NULL */
	if (b == NULL)
		return (0);

	/* Loop return converted number */
	for (z = 0; b[z] != '\0'; z++)
	{
		if (b[z] != '0' && b[z] != '1')
		{
			return (0);
		}
		x <<= 1;

		if (b[z] == '1')
		{
			x ^= y;
		}
	}
	return (x);

}
