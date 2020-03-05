#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int c;
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (c = 0; c < nmemb * size; c++)
	{
		s[c] = 0;
	}
	return (s);
}
