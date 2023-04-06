#include "main.h"
/**
 * is_prime_number - function
 * @n: variable that contain the value
 * Return: result
 */
int is_prime_number(int n)
{
return (prime(n, 2));
}
/**
 * prime - function
 * @n: variable that contain the value
 * @i: variable that contain the value
 * Return: result
 */
int prime(int n, int i)
{
if (n == 0 || n == 1 || n < 0)
{
return (0);
}
if (i == n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (prime(n, i + 1));
}
