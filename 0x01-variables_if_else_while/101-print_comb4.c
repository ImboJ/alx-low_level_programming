#include <stdio.h>

/**
 * main-prints 3 digit numbers 012 to 789
 * numbers are comma and space separated
 * the 3 digits must be different
 * print only smallest combination of the numbers
 * they should be in ascending order
 * use putchar function 6 times
 * don't use variable char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	while (i < 8)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = i + 2; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i < 7  && j <= 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}


