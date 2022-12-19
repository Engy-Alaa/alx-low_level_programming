#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
	int count, len, i, temp;

	len = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	/* use for loop to iterate the string*/
	for (i = 0; i < (len) / 2; i++)
	{
		/* temp variable use to temporary hold the string*/
		temp = *(s + i);
		*(s + i) = *(s + (len - i - 1));
		*(s + (len - i - 1)) = temp;
	}
}

