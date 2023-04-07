#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int sam;

	if (n > 0)
		sam = n * factorial(n - 1);
	else if (n == 0)
		return (1);
	else if (n < 0)
	{
		return (-1);
	}
	return (sam);
}
