#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A prints aout all alphabetical letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az == 'e' || az == 'q')
		{
			continue;
		}
		putchar(az);
	}
	putchar('\n');
	return (0);
}
