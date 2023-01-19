#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num, numm;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num = atoi(argv[1]);
	numm = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == 47 || *operator == 37) && numm == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num, numm));

	return (0);
}
