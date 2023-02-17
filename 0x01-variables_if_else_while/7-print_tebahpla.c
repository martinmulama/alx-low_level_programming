#include <stdio.h>
/**
 * main - Entry point
 * Description: A prints aout all alphabetical letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; --az)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
