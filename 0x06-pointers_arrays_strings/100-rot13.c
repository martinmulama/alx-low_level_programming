#include "main.h"
/**
 * rot13 - a function that encodes rot13
 *
 * @str: string input
 *
 * Return: @str
*/
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a') + 13) % 26 + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((str[i] - 'A') + 13) % 26 + 'A';
		}
	}
	return (str);
}
