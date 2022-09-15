#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function to check 0-9
 *
 * @c: checks input of function
 *
 * Return: return 1 if c isbdigit
 * otherwise always 0 (Success)
 */
int_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
