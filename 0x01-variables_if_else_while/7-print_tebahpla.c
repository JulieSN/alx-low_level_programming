#include <stdio.h>

/**
*main - Print lower case alphabet in reverse
*Return: Always 0 (Success)
*/

int main(void)
{
	char lr;

	for (lr = 'z'; lr = 'a'; lr--)
		putchar(lr);

	putchar('\n');

	return (0);
}
