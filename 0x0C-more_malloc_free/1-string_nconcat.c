#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function to allocate space for sting concatenation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * @n: variable n
 * Return: return pointer to copy of string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count, count1;
	int x = n;
	char *ptr;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (x >= size2)
	{
		x = size2;
		ptr = malloc(sizeof(char) * (size1 + size2 + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (size1 + x + 1));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size1; count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < x; count1++)
	{
		ptr[count++] = s2[count1];
	}
	ptr[count++] = '\0';
	return (ptr);
}
