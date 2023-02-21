#include "main.h"
/**
 * op_add - Makes the sum of two numbers
 * @n: value to be keyed
 *
 * Description: This is a longer description.
 * Returns signs plus value
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
