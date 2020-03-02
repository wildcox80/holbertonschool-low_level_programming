#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */
int main(int argc, char *argv[])
{
	int c, c1, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("0");
	}
	for (c = 1; c < argc; c++)
	{
		sum += atoi(argv[c]);
		for (c1 = 0; argv[c][c1] != '\0'; c1++)
		{
			if (!(isdigit(argv[c][c1])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
