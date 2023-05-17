#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string,
 * or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}

	unsigned int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}

	char *duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
	return (NULL);
	}

	for (unsigned int i = 0; i <= length; i++)
	{
	duplicate[i] = str[i];
	}

	return (duplicate);
}
