#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @nl: number of lines to draw
 *
 * Return: empty
 *
 */

void print_line(int nl)
{
	int x;

	if (nl <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < nl; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
