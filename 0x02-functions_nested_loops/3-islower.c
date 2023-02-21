#include "main.h"
int _islower(int c);
/**
 * main - Entry point
 * Description: A program that uses function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * _islower - Makes the sum of two numbers
 * @c: interger or ascii value of character
 *
 * Description: This is a longer description.
 * Checks if a letter i lowercase and returns specified value
 * Return: The sum of the two parameters
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
