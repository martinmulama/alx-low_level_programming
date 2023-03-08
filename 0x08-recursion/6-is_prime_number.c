#include "main.h"
/**
 * is_prime_number_compute - helps checks for primenumber
 *
 * @n : input number
 * @i : divisor
 * Return: 1 if prime otherwise 0.
 *
*/
int is_prime_number_compute(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (n % i == 0)
	{
		return (0);
	}
	if ((i * i) > n)
	{
		return (1);
	}
	return (is_prime_number_compute(n, i + 1));


}
/**
 * is_prime_number - a wrapper that checks for primenumber
 *
 * @n : input number
 * Return: 1 if prime otherwise 0.
*/
int is_prime_number(int n)
{
	return (is_prime_number_compute(n, 2));
}
