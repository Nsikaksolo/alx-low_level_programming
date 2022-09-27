i#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		l += a[i];
		a += size;
	}
	a -= size;

	for (inex = 0; index < size; index++)
	{
		r += a[i];
		a -= size;
	}
	printf("%d, %d\n", l, r);
}
