#include "holberton.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else 
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Betty Holberton");
    return (0);
}

	
