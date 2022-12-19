#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; str[count] != '\0'; count++)
		inc++;

	for (count = inc; count >= 0; count--)
		_putchar(str[count]);
	return (0);
}
