#include "main.h"
/**
 * print_line - print a straight line in terminal
 *
 * @n: is the number of times the _ character
 *     should be printed
*/
void print_line(int n)
{
	char underscore = '_';
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			_putchar(underscore);
		}
		_putchar('\n');
	}
}
