#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates to new memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ccc;
	int k, m = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	ccc = malloc(sizeof(char) * (k + 1));

	if (ccc == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		ccc[m] = str[m];

	return (ccc);
}
