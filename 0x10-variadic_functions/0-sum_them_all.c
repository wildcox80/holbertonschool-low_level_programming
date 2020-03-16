#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 *@n: num
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_num;
	double sum = 0;
	unsigned int i;

	va_start(sum_num, n);

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		sum += va_arg(sum_num, int);
		i++;
	}
	va_end(sum_num);

	return (sum);
}
