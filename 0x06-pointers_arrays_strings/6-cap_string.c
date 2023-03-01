#include "main.h"
/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to string array
 *
 * Return: @s
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
				|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
				|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '\"'
				|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
				|| s[i - 1] == '}') && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= ('a' - 'A');
		}
	}
	return (s);
}
