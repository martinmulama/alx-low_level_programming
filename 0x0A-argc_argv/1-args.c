#include <stdio.h>
/**
 * main - a program that prints the number of arguments
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;
	int count;

	for (i = 0; i < argc; i++)
	{
		if (argv[i] != argv[0])
		{
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
