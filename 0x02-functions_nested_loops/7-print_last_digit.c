#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @r: input to be checked.
 * Return: value of the last digit
 */
int print_last_digit(int r)
{
	r %= 10;

	if (r < 0)
		r *= -1;

	_putchar(r + '0');
	return (r);
}
