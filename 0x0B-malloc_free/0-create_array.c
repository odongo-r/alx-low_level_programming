#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of integer size and assigns a char c
 * @size: size of the array created
 * @c: the char to be assigned
 * Description: create array of int size and assign char c
 * Return: pointer to array, NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *stn;
	unsigned int y;

	stn = malloc(sizeof(char) * size);
	if (size == 0 || stn == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		stn[y] = c;

	return (stn);
}
