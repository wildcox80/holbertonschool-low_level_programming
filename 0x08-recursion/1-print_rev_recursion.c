#include "holberton.h"
/**
 * _print_rev_recursion - reverse recursion function to print string
 * @s: pointer of char type
 * description: print a string
 *
 * Return: Always success
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}

}
