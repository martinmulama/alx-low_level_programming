#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds passed arguments
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0 (Success) and 1 if otherwise
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (num <= 0 || !isdigit(argv[i][0]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += num;
			}

		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
