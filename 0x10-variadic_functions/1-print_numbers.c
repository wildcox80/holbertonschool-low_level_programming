#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_num;
	int result;
	unsigned int i;

	va_start(list_num, n);

	i = 0;
	while (i < n)
	{
		result = va_arg(list_num, int);
		printf("%d", result);
		if (i < n - 1 && (separator != NULL))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(list_num);
}

