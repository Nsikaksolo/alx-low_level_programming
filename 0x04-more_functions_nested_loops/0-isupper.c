#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is 0 or not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
}
