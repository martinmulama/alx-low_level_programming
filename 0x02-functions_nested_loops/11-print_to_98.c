#include "main.h"
void print_to_98(int n)
{

	for (n = n; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (n = n; n >= 98; n--)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
