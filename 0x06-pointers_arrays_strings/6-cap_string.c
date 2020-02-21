#include "holberton.h"
/**
 * cap_string - capitalize words in a string
 * @s: pointer to an array of words
 *
 * Return: Return capitalized words
 */

char *cap_string(char *s)
{
	int i, j;
	char spch[13]  = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			  '(', ')', '{', '}'};
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; spch[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
			if (s[i] == spch[j])
			{
				if  (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
