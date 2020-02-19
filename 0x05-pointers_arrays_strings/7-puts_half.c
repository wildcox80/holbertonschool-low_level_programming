#include "holberton.h"

/**
 * puts_half - function that prints half of a string.
 * @str: char array string type
 *
 */

void puts_half(char *str)
{
int a;
a = 0;
while (str[a] != '\0')
{
a++;
}
a++;
for (a /= 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
