#include "main.h"
/**
 * print_buffer - c function that print the content of an
 * input number of bytes from a buffer
 * print 10 bytes per line
 * sart with the postion of the first bytes in hexadecimal (8 chars)
 * starting with '0'
 * each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 byte at a time, seperated by a space
 * each line shows the content of a buffer
 * prints the byte if it printable, if not , prints
 * each line ends with a new line
 * if the input byte size is 0 or less, the function only prints a new line
 * @b: number of bytes
 * @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0 j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			print("%08x: ", i);
		for (j = i; j < i + 9;; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}
