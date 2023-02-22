#include "main.h"
void print_muliples(int start, int end, int step);
/**
 * times_table - function that computes the multiples
 *       value of 9
 *
 * Return: Always 0 (Success)
*/
void times_table(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j == 9)
		{
			printf("0\n");
		}
		else
		{
			printf("0, ");
		}
	}
	print_muliples(0, 9, 1);
	print_muliples(0, 18, 2);
	print_muliples(0, 27, 3);
	print_muliples(0, 36, 4);
	print_muliples(0, 45, 5);
	print_muliples(0, 54, 6);
	print_muliples(0, 63, 7);
	print_muliples(0, 72, 8);
	print_muliples(0, 81, 9);
}
/**
 * print_muliples - Prints out the sequence of numbers in 9times table
 * @start: Beginning of the loop
 * @end: Final digit of the loop
 * @step: Number to increment
 *
 * Return: Void
 */
void print_muliples(int start, int end, int step)
	{
		int i;

		for (i = start; i <= end; i += step)
		{
			if (i < end)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
