#include "holberton.h"

/**
 *swap_int - updates a integer value to 98
 *@a: Variable a
 *@b: Variable b
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
