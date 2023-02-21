#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: nteger to check
 * Return: 0 or 1
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
