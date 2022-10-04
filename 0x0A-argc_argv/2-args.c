#include <stdio.h>

/**
 * main - point to all arguments it receives
 * @argc: number of argument passsed to the function
 * @argv: argument vector of pointer to string
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
