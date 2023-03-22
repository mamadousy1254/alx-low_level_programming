#include <stdio.h>
#include "main.h"

/**
 *  * * positive_or_negative - Test if a number is positive, negative or zero
 *   * * @n: The number to test
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
}
