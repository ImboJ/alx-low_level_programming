#include <stdio.h>

/**
 * main-prints numbers 2 digit numbers 00 to 99
 * numbers are comma and space separated
 * the 2 digits must be different; 01 and 10 are same
 * print only smallest combination of the numbers
 * they should be in ascending order
 * use putchar function 5 times
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

	while (i < 10)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
		
		if (i <= 9 || j < 9)
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

