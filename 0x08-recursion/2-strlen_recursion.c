#include <stdio.h>
/**
 * _strlen_recursion - length of a string using recursion
 * @s: pointer of char type
 * description: print a length string
 *
 * Return: Always success
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
