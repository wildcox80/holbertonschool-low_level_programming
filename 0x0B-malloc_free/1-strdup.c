#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer string
 * Return: Return pointer to array created
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int counter = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}

	s = malloc(counter);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < counter)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
