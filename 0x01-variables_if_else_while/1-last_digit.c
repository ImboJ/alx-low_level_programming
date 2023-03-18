#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Checks the value of the last digit of a number
*var_n - stores diff numbers evertime
*
* Divide the var_n by 10 to find the last digit var_last
* var_last is greater than 5_checks if btwn 6-9
* var_last less than 6 and not 0-checks if btwn 1-5
* otherwise var_last is zero
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
