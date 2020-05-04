#include "holberton.h"

/**
 *_strlen - show length a string
 *@src: type char
 *
 *Return: lenght of string
 */

char _strlen(char *src)
{
int i;
	for (i = 0; src[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 *_strncat - concatenate two strings
 *@dest: destination concatenate
 *@src: source concatenate
 *@n: int type
 *Return: concatenate two string same strcat
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len;
int j;
dest_len = _strlen(dest);

for (j = 0 ; j < n && src[j] != '\0' ; j++)
dest[dest_len + j] = src[j];
dest[dest_len + j] = '\0';

return (dest);
}
