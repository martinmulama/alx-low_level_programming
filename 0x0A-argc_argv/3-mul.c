#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the product of arguments
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < 2; i++)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", result);
	return (0);
}
