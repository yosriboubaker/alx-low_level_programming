/**
 * is_prime_helper - checks if number is a prime
 *
 * @n: the number to check
 * @i: the loop number
 *
 * Return: int
 */
int is_prime_helper(int n, int i)
{
	return (i == 1 ? 1 : n % i == 0 ? 0 : is_prime_helper(n, i - 1));
}

/**
 * is_prime_number -  check code
 *
 * @n: number to check
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (n < 2 ? 0 : is_prime_helper(n, n - 1));
}
