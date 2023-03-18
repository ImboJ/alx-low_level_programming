#include <stdio.h>

/**
 * main-prints lowercase then uppercase alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	char a;

	/*print alphabets in lowercase*/
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	/*prints alphabets in UPPERCASE*/
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
