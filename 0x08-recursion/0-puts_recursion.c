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


	
