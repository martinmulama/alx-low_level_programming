#include "main.h"
/**
 * _strlen - checks if input is digit between 0 - 9
 *
 * @s: input parameter
 *
 * Return: strcount
*/
int _strlen(char *s)
{
	int strcount;

	for (strcount = 0; *s != '\0'; ++s)
		++strcount;

	return (strcount);

}
