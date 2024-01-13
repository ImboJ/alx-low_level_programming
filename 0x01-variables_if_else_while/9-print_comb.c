#include <stdio.h>

/**
 * main-print all posiible combination of single digit numbers
 * numbers must be separated by comma folowed by space
 * numbers are in ascending order
 * use only putchar function 4 times
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
