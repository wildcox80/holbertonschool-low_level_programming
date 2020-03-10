#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 * Return: return pointer to struct
 */

void print_dog(struct dog *d)
{
if (d == NULL)

	return;

if (d->name == NULL)

	printf("name: (nil)\n");

else

	printf("name: %s\n", d->name);
printf("age: %f\n", d->age);

if (d->owner == NULL)

	printf("Owner: (nil)\n");

else

	printf("Owner: %s\n", d->owner);

}
