#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: type char.
 * Return: Always 0.
 */
void _puts(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
	_putchar(str[a]);
}
	_putchar('\n');
}
