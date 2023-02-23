#include "main.h"

/**
 * print_numbers - prints number 0 to 9
 * followed by a new line
 * _putchar - writes the character c to stdout
 * Return: 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
