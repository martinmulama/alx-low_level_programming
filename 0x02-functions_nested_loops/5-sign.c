#include "main.h"
/**
 * print_sign- Makes the sum of two numbers
 * @n: input argument
 *
 * Description: A function that prints and returns values
 *prints signs and return values
 * Return: The sum of the two parameters
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
