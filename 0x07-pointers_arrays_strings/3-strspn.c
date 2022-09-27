#include "main.h"

/**
 * _strspn - gets iength of a prefix substring
 * @s: string to check
 * @accept: string to check again
 *
 * Return:  number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (i = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
			break;
	}
	if (!accept[j])
		break;
	}
	return (i);
}
