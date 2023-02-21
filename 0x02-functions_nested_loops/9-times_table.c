#include "main.h"

/**
 * times_table - print 9 times table from 0
 * rw = row, clm = column, cr = digits of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{
	int rw, clm, cr;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (clm = 1; clm <= 9; clm++)
		{
			cr = (rw * clm);
			if ((cr / 10) > 0)
			{
				_putchar((cr / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((cr % 10) + '0');

			if (clm < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
