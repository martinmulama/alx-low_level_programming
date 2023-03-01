#include "main.h"
/**
 * string_toupper - a function that copies toupper
 *
 * @str : pointer to input char
 *
 * Return: @s
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
