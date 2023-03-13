#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int count1 = 0;
	unsigned int count2 = 0;
	unsigned int i;
	unsigned int j;
	char *new_concat_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		count2++;
	}
	new_concat_string = malloc((count1 + count2 + 1) * sizeof(char));
	if (new_concat_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_concat_string[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		new_concat_string[i + j] = s2[j];
	}
	new_concat_string[i + j] = '\0';

	return (new_concat_string);


}
