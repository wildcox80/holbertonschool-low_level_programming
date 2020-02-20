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
 *_strcat - concatenate two strings
 *@dest: destination concatenate
 *@src: source concatenate
 *Return: concatenate two string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
