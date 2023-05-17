#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;
	int newline_count = ac - 1;

	/* Number of newlines needed */

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
		total_len += len;
	}

	/* Add space for null terminator and newlines */
	total_len += newline_count + 1;

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);

	/* Copy the arguments to the concatenated string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}

		/* Add newline, except for the last argument */
		if (i < ac - 1)
		{
			str[len] = '\n';
			len++;
		}
	}

	/* Add null terminator */
	str[len] = '\0';

	return (str);
}
