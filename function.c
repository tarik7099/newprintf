#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_string - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_string(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_char(char *c)
{
	int i;

	for (i = 0; c[i]; c++)
	{
		_putchar(c[i]);

	}
}
/**
 * decimalTobinary - writes the character c to stdout
 * @d: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void decimalTobinary(unsigned int d)
{
	int i, j;
	if (d == 0)
	{
		_putchar('0');
		return;
	}
	int quotient[32];

	while (d > 0)
	{
		quotient[i] = d % 2;

		d = d / 2;

		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar( quotient[j] + '0');
	}
}
