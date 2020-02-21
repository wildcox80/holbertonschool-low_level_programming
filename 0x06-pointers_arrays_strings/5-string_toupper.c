#include "holberton.h"

/**
 * string_toupper - change a string to upper case
 * @s: pointer to a string
 * Return: s
 */

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
}
return (s);
}
