#include "holberton.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: type char.
 * Return: Always 0.
 */
void rev_string(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
_putchar(s[a]);
}
