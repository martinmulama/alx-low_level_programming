#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/
char *_strdup(char *str)
{
	unsigned int count = 0;
	unsigned int i;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	new_str = malloc((count + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
