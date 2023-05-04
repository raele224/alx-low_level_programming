#include "main.h"

/**
 * rot13 - Encodes a string using rot13 encryption
 *
 * @str: The string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *res = str;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}
	return (res);
}
