#include "main.h"
/**
 * _isalpha - Makes the sum of two numbers
 * @c: First operand
 *
 * Description: This is a longer description.
 * Checks whther a letter is uppercase or lower case
 * Return: The sum of the two parameters
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
