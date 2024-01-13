#include <stdio.h>

/**
 * main-print all single digit numbers of base 10 from 0
 * Use putchar fuction only
 * don't use any variable of type char
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
