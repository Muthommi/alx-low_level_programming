#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 of the number is a prime number, or else returns 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - Helper function checking for prime numbers
 * @n: Number to be checked
 * @i: current divisor to test
 *
 * Return: 1 if the number is a prime number, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
