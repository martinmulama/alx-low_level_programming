#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints  all single digit numbers of base 10.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
		putchar(i + '0');
		}
		else
		{
		putchar('a' + i - 10);
		}
	}
	putchar('\n');
	return (0);
}
