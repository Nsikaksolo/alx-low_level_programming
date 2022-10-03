#include "main.h"

/**
 * create_array - creates an array of characters and
 * initializes it with a specific character
 * @size: size of the array
 * @c: character to insert
 * Return: Null if size is zero or if it falls
 * pointer to array if everything is normal
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index  = 0; index < size; index++)
		array[index] = c;
	return (array);
}
