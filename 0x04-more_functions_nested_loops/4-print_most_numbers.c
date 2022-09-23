#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, not printing 2 and 4, followed by new line
 */
void print_most_numbers(void)
{

	int j = 0;

	while (j < 10)
	{
		if (j != 2 && j != 4)
			_putchar(j + '0');
		j += 1;
	}
	_putchar('\n');
}
