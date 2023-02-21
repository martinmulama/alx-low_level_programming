#include <stdio.h>
void print_alphabet_x10(void);
/**
 * main - Entry point
 * Description: A program that uses function
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	return (0);
}
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

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
