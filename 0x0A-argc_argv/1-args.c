#include <stdio.h>

/**
 * main - prints the name number of argument passed to it
 * @argc: number of argument passed to the function
 * @argv: argument vector of pointr passed to the string
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
