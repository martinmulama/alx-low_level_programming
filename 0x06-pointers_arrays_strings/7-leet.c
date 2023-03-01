#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/
char *leet(char *s)
{
	int i, j;
	char smallletters[] = {'a', 'e', 'o', 't', 'l'};
	char capitalletters[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == smallletters[j] || s[i] == capitalletters[j])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}
