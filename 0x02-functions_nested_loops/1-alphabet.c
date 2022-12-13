#include "main.h"
/**
 *print_alphabet- function that prints the alphabet, in lowercase
 *
 *Return:no return
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar ('\n');
}
