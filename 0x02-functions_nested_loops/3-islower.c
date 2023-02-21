#include "main.h"
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
