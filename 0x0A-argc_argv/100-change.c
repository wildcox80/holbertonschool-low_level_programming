#include <stdio.h>
#include <stdlib.h>

/**
 * main - number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: array of strings
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int t, c;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (t > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (t >= cents[i])
				{
					c += t / cents[i];
					t = t % cents[i];
				}
			}
		}
		if (t == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
