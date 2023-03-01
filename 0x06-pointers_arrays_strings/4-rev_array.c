#include "main.h"
/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to interchange
 *
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
