#include "main.h"

/**
 *  _abs - function that computes the absolute value of an integer.
 *  @r: input to be checked
 *  Return: absolute value of r
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = r * (-1);
		return (r);
	}
	else
		return (r);
}
