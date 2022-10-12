#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the different of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the quotient of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * - calculate the reminder of two integer
 *   @a: first integer
 *   @b: second integer
 *
 *   Return: reminder of a divided by a
 */
int op_mod(int a, int b)
{
	return (a % b);
}
