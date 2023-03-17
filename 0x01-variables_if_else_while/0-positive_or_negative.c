#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Check a relationship of a number to 0
*var_n - stores diff numbers evertime
*
* Arandom number assigned to var_n whenever executed
* var_n is positive-checks if n is greater than 0
* var_n is negative-checks if n is less than 0
* otherwise var_n is zero
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{

		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
