#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element on array
 * @array: pointer to array
 * @action: pointer to action
 * @size: size_t
 * Return: Always successful
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long a;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;
	for (a = 0; a < size; a++)

	{
		action(array[a]);
	}

}
