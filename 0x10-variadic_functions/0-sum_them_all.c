#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function to add number
 * @n: const unsigned int type
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list addlist;
	double sum = 0;
	unsigned int i;

	va_start(addlist, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(addlist, int);
	}
	va_end(addlist);
	return (sum);
}
