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

	for (count = 0; str1[count] != '\0'; count++)
	{
		len++;
	}
	/* use for loop to iterate the string*/
	for (i = 0; i < (len) / 2; i++)
	{
		/* temp variable use to temporary hold the string*/
		temp = *(str1 + i);
		*(str1 + i) = *(str1 + (len - i - 1));
		*(str1 + (len - i - 1)) = temp;
	}
}

