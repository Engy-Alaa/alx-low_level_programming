#include "main.h"
/**
 * main- program that prints _putchar, followed by a new line
 *
 * Return:return 0
 */
int main(void)
{
	char school[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar('\n');
	return (0);
}
