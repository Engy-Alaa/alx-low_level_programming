#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @i: number targeted
 * Return: returns 0
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
