#include <stdio.h>

/**
 * main-print the alphabet in lowercase
 *
 * Don't print q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		putchar(a);
		putchar('\n');
	}

	return (0);
}
