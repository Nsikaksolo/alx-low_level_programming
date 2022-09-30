#include "main.h"
/**
 * _islower - function to check for lowercase
 * @c: is the int that will be use for the aurgument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	return (0);
}
