#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer of char
 * @f: pointer to function
 * Return: Always successful
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
