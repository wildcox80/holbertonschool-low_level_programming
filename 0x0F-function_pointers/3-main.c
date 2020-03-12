#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - calculator
 * @argc: number of args
 * @argv: args
 * Return: 0. 98. 99. 100
 */

int main(int argc, char *argv[])
{
	char *str, oper;
	int num1, num2, tot;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oper = argv[2][0];
	str = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(str) == NULL || str[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((oper == '/' || oper == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	tot = (*get_op_func(str))(num1, num2);
	printf("%d\n", tot);
	return (0);
}

