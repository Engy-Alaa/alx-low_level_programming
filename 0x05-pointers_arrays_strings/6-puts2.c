#include "main.h"

/**
 * puts2 - prints part of a string
 * @str: string to be printed
 *
 * Return: void
 **/
void puts2(char *str)
{
	int count, len, i, temp;

	len = 0;

	for (count = 0; str1[count] != '\0'; count++)
	{
		len++;
	}
	for (i = 0; i < (len - 1); i = i + 2)
	{
		_putchar(*(str1 + i));
	}
}
