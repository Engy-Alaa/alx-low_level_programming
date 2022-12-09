#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print alphabet letters except q and e followed by new line
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
