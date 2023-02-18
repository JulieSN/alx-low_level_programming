#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = 48; n1 <= 57; c++)
	{
	for (n2 = 48; n2 <= 57; n2++)
	{
	for (n3 = 48; n3 <= 57; n3++)
	{
	for (n4 = 48; n4 <= 57; n4++)
	{
		if (((n3 + n4) > (n1 + n2) && n3 >= n1) || n1 < n3)
		{
		putchar(n1);
		putchar(n2);
		putchar('');
		putchar(n3);
		putchar(n4);

		if (n1 + n2 + n3 + n4 == 227 && c == 57)
		{
		break;
		}
		else
		{
		putchar(',');
		putchar('');
		}
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
