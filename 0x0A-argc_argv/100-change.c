#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that returns coins passed as cent arguments
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0 (Success) and 1 if otherwise
*/
int main(int argc, char *argv[])
{
	int i;
	int coins;
	int cents;
	int values[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}
	coins = 0;

	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= values[i])
		{
			cents -= values[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}
