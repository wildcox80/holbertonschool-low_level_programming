#include <stdio.h>
/**
 * _natural_sqr - if natural square number
 * @x: variable x
 * @y: variable y
 * Return: Always success
 */

int _natural_sqr(int x, int y)
{
if (x == (y * y))
{
return (y);
}
else if (y * y > x)
{
return (-1);
}
else
{
return (_natural_sqr(x, y + 1));
}
}

/**
 * _sqrt_recursion - check if number has natural sqr
 * @n: int type
 * Return: return success
 */
int _sqrt_recursion(int n)
{
if (n == 1)
{
	return (1);
}
if (n == 0)
{
	return (0);
}
if (n  < 1)
{
	return (-1);
}
return (_natural_sqr(n, 1));
}
