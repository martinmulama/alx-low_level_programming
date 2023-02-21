#include "main.h"
/**
 * print_last_digit - function that computes the absolute
 *       value of an integer
 *
 * @i: takes in integer type input for function
 *
 * Return: last_digit
*/
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (i < 0)
	{
		last_digit = -1 * (i % 10);
	}
	else
	{
		last_digit = i % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
