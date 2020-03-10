/**
 * strcpy - function to copy string from source
 *@dest: pointer to destination of string
 *@src: pointer to source of string
 * Return: return the value at dest
 */

char *strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - It creates a new dog :3
 * @name: Dog's Name.
 * @age: Dog's Age.
 * @owner: Dog's Owner.
 *
 * Return: It returns a pointer to structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;

	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
		return (NULL);

	dog_n->name = malloc(sizeof(name) + 1);
	if (dog_n->name == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	dog_n->owner = malloc(sizeof(owner) + 1);
	if (dog_n->owner == NULL)
	{
		free(dog_n->name);
		free(dog_n);
		return (NULL);
	}

	dog_n->name = strcpy(name, dog_n->name);
	dog_n->age = age;
	dog_n->owner = strcpy(owner, dog_n->owner);

	return (dog_n);
}
