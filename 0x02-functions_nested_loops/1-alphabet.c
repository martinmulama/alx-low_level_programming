#include "main.h"
void print_alphabet(void);
/**
 * main - Entry point
 * Description: A program that uses function
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Prints alphabets
 *
 * Description: This is alphabet printing function
 * Return: The sum of the two parameters
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
