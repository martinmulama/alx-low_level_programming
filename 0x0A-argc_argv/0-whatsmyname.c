#include <stdio.h>
/**
 * main- a function prints its name
 *
 * @argc: holds the number of arguments passed
 * @argv: array that holds the arguments passed
 *
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
