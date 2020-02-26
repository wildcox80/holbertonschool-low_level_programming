#include <stdio.h>
/**
 * factorial - length of a string using recursion
 * @n: char type
 * description: print a length string
 *
 * Return: Always success
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
