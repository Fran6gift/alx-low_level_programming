#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: line
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		if (n > 0)
		{
			_putchar(95);
			x += 1;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
