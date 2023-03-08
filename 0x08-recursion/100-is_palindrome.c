#include "main.h"
/**
 * is_palindrome_helper - helps check for palindrome
 *
 * @s: string
 * @left: left index
 * @right: right index
 *
 * Return: 1 if palindrome otherwise 0
*/
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (is_palindrome_helper(s, left + 1, right - 1));
}
/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: string
 *
 * Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ((1 + _strlen_recursion(s + 1)));
	}
}
/**
 * is_palindrome - wrapper check palindrom function
 *
 * @s: string
 *
 * Return: 1 if palindrome otherwise 0
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return ((is_palindrome_helper(s, 0, len - 1)));
}
