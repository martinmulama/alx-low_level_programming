#include "main.h"
/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match_flag;

	for (i = 0; s[i] != '\0'; i++)
	{
	match_flag = 1;
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	match_flag = 0;
	break;
	}
	}
	if (match_flag == 1)
	break;
	}
	return (i);
}
