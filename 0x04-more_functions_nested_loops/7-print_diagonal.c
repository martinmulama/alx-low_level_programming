#include "main.h"
/**
 * print_diagonal - print a diagonal line in terminal
 *
 * @n: is the number of times the backslash
 *     should be printed
*/
void print_diagonal(int n)
{
	char backslash = '\\';
	int i;
	int j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j < i; ++j)
			{
				_putchar(' ');
			}
		_putchar(backslash);
		_putchar('\n');
		}
	_putchar('\n');
	}
}
