#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that uses printf
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (i >= j || j == 0)
	{
		continue;
	}
	else
	{
		putchar(i + '0');
		putchar(j + '0');
		if (i == 8 && j == 9)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	return (0);
}
