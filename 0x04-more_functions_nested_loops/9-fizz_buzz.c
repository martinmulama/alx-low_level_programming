#include"main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *       fizz out numbers that are multiples of 3
 *       buzz out numbers that are multiples of 5
 *       numbers that are multiples of 3 n 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int fizz_buzz(void)
{
	int n;

	for (n = 1; num <= 100; ++n)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
