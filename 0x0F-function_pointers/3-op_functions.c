#include "3-calc.h"

/**
 * op_add - add
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_add(int a, int b)
{
	int x = 0;

	x = a + b;
	return (x);
}

/**
 * op_sub - subtract
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_sub(int a, int b)
{
	int x = 0;

	x = a - b;
	return (x);
}

/**
 * op_mul - multiply
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_mul(int a, int b)
{
	int x = 0;

	x = a * b;
	return (x);
}

/**
 * op_div - division
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_div(int a, int b)
{
	int x = 0;

	x = a / b;
	return (x);
}

/**
 *op_mod - modulus
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_mod(int a, int b)
{
	int x = 0;

	x = a % b;
	return (x);
}