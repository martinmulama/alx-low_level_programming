#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that uses printf
 * Return: Always 0 (Success)
 */
int main(void)	
{		
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
	for (k = 0; k < 10; k++)
	{
		if (i >= j || j == 0)
		{
			continue;
		}
		else if (j >= k || j == k)
		{
			continue;
		}	
		else if (i >= k || i == k)
		{
			continue;
		}
		else
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');
			if (i == 7 && j == 8 && k == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			} 	
		}
	}
	}
	}
	return (0);	
}
