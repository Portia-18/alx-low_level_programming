#include "main.h"
/**
 * _sqrt_calc - calculates sqrt
 * @u: no that is guessed 
 * to be sqrt
 * @n: input sqrt to be found
 * Return: evaluate sqrt
 * _sqrt_recursion - recursion sqrt
 * Return: sqrt
 */
int _sqrt_calc(int u, int n)
{
	if(u * u == n)
	{
		return (u);
	}
	else if (u * u < n)
	{
		return (_sqrt_calc(u + 1, n));
	}
	return (-1);
}

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_calc(int u, int n));
	}
}
