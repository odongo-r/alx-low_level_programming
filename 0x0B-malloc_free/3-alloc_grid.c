#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **set;
	int s, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	set = malloc(sizeof(int *) * height);

	if (set == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		set[s] = malloc(sizeof(int) * width);

		if (set[s] == NULL)
		{
			for (; s >= 0; s--)
				free(set[s]);

			free(set);
			return (NULL);
		}
	}

	for (s = 0; s < height; s++)
	{
		for (t = 0; t < width; t++)
			set[s][t] = 0;
	}

	return (set);
}
