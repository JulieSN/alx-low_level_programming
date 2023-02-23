#include "main.h"

/**
 * _isdigit - a function checks for a digit
 *@n: input
 *Return: Always 0
 */

int _isdigit(int n)
{
	if ((n >= 48) && (n <= 57))
		return (1);

	else
		return (0);
}
