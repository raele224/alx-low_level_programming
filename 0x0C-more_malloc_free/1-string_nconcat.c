#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates s1 and s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string
 *         If the function fails, then  returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int s1_len = 0, s2_len = 0, concat_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;

	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat_len = s1_len + n;

	concatenated = malloc(sizeof(char) * (concat_len + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i++] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}
