#include "main.h"

/**
 * prime_calrec - primal calculation
 * @n: potential prime no.
 * @divzer: divisor
 * is_prime_number - evaluates primes
 * Return: 1 true 0 false
 */
int prime_calrec(int n, int divzer)
{
	if (n <= 1)
	{
		return (0); //no.s <= 1 arent prime
	}
	else if (divzer == 1)
	{
		return (1);
	}
	else if (n % divzer == 0)
	{
		return (0);
	}
	return prime_calrec(n, divzer - 1);
}

int is_prime_number(int n)
{
	if (prime_calrec(n, divzer))
	{
		return (1);
	}
	return (0);
}
