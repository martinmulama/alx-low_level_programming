#include "main.h"

/**
 * main - Entry point
 *
 * Description: caclculate sum of all
 *		the multiples of 3 or 5
 *		1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum_total, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum_total += num;
	}
	printf("%d\n", sum_total);

	return (0);
}
