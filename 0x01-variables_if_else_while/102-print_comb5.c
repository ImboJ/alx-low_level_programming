#include <stdio.h>

/**
 * main-prints two 2 digit numbers from 0 to 99
 * 2 sets of numbers are space separated
 * all numbers are printed with 2 digits
 * combination of numbers are comma separated
 * print only smallest combination of the numbers
 * use putchar function 8 times
 * don't use variable char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	k = 0;

	while (i < 99)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i <= 98  && j <= 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
