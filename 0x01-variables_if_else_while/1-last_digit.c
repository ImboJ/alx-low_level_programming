#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Checks the value of the last digit of a number
*n - stores diff numbers evertime
*
* Divide n by 10 and det remainder to find the last digit n_last
* n_last is greater than 5-checks if btwn 6-9
* n_last less than 6 and not 0-checks if btwn 1-5
* otherwise n_last is zero
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int n_last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** Finding the remainder of the number by dividing by 10 */

	n_last = n % 10;

	if (n_last < 6 && n_last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_last);
	}

	else if (n_last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n_last);
	}
	else if (n_last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_last);
	}

	return (0);
}
