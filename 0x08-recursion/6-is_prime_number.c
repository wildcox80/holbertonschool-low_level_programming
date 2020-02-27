#include "holberton.h"

/**
 * isPrime - check for number is prime
 * @x: int type
 * @y: int type
 * Return: always success
 */

/* Base Case */
int isPrime(int x, int y)
{
	if (x == y)
		return (1);
	else if  (y % x == 0)
		return (0);
	else
		return  (isPrime(x + 1, y));
}

/**
 * is_prime_number - return prime number or not
 * @n: int type
 * Return: always success
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 0)
		return (0);
	return (check_prime(2,  n));
}