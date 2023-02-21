include "main.h"
/**
 * times_table - function that computes the multiples
 *       value of 9
 *
 * Return: Always 0 (Success)
*/
void times_table(void)
{
	int n, mult, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (multiple = 1; multiple <= 9; ++multiple)
		{
			_putchar(',');
			_putchar(' ');

			result = num * multiple
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
