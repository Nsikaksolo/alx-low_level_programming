#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of a umber stored in variable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int i;

	srand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
