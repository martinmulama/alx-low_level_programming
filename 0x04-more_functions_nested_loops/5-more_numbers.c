#include "main.h"
/**
 * print_to_14 - print 0 - 14 with putchar
 *
 * Return: void
*/
void print_to_14(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i == 14)
		{
			_putchar('1');
			_putchar('4');
			_putchar('\n');
		}
		else if (i >= 10)
		{
			_putchar('1');
			_putchar(i - 10 + '0');
		}
		else
		{
			_putchar(i + '0');
		}
	}

}
/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Void
*/
void more_numbers(void)
{
	print_to_14();
	print_to_14();
	print_to_14();
	print_to_14();
	print_to_14();
	print_to_14();
	print_to_14();
	print_to_14();
	print_to_14();
	print_to_14();
}
