#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	for (count = inc - 1; count >= 0; count--)
		_putchar(s[count]);
	_putchar(10);
}
