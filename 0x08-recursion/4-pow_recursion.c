#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y recursion
 * @x: variable x
 * @y: variable y
 * description: print a the value of x raised to the power of y
 *
 * Return: Always success
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
