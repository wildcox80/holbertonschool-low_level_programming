#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: type char.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{

}
a--;
while (s[a] != 0)
{
	_putchar(s[a]);
a--;
}
_putchar('\n');
}
