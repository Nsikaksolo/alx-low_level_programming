#include "main.h"

/**
 * infinite_add - c function that adds two numbers stored
 * in strings to a buffer
 * assuming that strings are never empty and
 * that number will always be positive or 0,
 * assuming there are only digit stored in the number strings
 * if result can be stored in a buffer
 * return poiter to the result
 * if result cannot be stored in the buffer, return 0
 * @n1: first number to be stored
 * @n2: second number to be stored
 * @r: stored result
 * @size_r: size of buffer
 * Return: return poiter to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - adds the numbers stored in two strings.
 * @n1: the string containing the first number to be added
 * @n2: the string containing the second number to be added
 * @r: the buffer to store the result
 * @r_index: the current index of the buffer
 *
 * Return: if r can store the sum - pointer to the result
 * if r cannot store the sum - 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens, = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

}
