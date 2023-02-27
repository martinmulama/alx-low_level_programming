#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *		using two input parameters
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: Void
*/
void swap_int(int *a, int *b)
{
	int hold_temporarily = 0;

	hold_temporarily = *a;
	*a = *b;
	*b = hold_temporarily;
}
