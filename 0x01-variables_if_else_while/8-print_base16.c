#include <stdio.h>

/**
 * main-prints all numbers of base 16 in lowercase
 * Use only putchar function
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
