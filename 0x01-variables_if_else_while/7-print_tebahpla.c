#include <stdio.h>

/**
 * main-prints the lowercase alphabet in reverse
 * use only putchar function
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);

}
