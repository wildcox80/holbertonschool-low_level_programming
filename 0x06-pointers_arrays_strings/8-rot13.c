#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *rot13(char *s)
{
int i, j;

char var1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char res[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; var1[j] != '\0'; j++)
	{
		if (s[i] == var1[j])
		{
			s[i] = res[j];
			break;
		}
	}
}
return (s);
}
