#include "holberton.h"

/**
 * leet - replace letters with numbers
 * @s: pointer to an array of words
 *
 * Return: s
 */

char *leet(char *s)
{
int i, j;

char var1[] = "aeotl";
char var2[] = "AEOTL";
char res[] = "43071";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; var1[j] !=  '\0' && var2[j] != '\0'; j++)
	{
		if (s[i] == var1[j] || s[i] == var2[j])
		{
			s[i] = res[j];
		}
	}
}
return (s);
}
