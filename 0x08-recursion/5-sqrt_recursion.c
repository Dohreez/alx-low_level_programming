#include "main.h"
#include <stdio.h>
int squareroot(int n, int i);
/**
 * squareroot - Checks the perfect square of numbers.
 * @n: The number to find the square root of.
 * @i: To the root of.
 *
 * Return: Return: Always 0.
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
/**
 * _sqrt_recursion - Finds the natural square root of numbers
 * @n: input
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (squareroot(n, (n + 1) / 2));
}
