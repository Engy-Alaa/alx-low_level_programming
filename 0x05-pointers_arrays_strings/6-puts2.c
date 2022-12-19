#include "main.h"

/**
 * puts2 - prints part of a string
 * @str: string to be printed
 *
 * Return: void
 **/
void puts2(char *str)
{
	int count, len, i;

	len = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		len++;
	}
	for (i = 0; i <= (len); i = i + 2)
	{
		_putchar(str[i]);
	}
}
