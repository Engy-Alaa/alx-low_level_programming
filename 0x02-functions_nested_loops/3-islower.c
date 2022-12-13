#include "main.h"
/**
 *_islower - function that checks for lowercase character
 *@c: character to be verified
 *Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
