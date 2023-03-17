#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *  *main - Entry point
 *   *   *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_dt = n % 10;

	if (last_dt != 0 && last_dt < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dt);
	}

	else if (last_dt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dt);
	}

	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dt);
	}
	return (0);
}
