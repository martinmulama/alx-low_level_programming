#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **two_dimensional_ar;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	two_dimensional_ar = malloc(height * sizeof(int *));
	if (two_dimensional_ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		two_dimensional_ar[i] = malloc(width * sizeof(int));
		if (two_dimensional_ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(two_dimensional_ar[j]);
			}
		free(two_dimensional_ar);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			two_dimensional_ar[i][j] = 0;
		}
	}
	return (two_dimensional_ar);
}
