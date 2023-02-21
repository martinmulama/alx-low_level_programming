#include "main.h"
void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - prints alphabets in lower case
 *
 * Description: prints alphabet in lower case
 * ten times
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char i;
	int h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
}
