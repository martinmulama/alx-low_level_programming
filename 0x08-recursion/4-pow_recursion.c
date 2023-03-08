#include "main.h"
/**
 * _pow_recursion - function that returns the power of x^y
 *
 * Description: this method is good for speed, check this youtube video
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the power of x by y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
