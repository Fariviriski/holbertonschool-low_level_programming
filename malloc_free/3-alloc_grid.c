#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width of the 2 dimensional array
 * @height: height pf the 2 dimensonal array
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **twod;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twod = malloc(sizeof(int *) * height);

	if (twod == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twod[hgt_index] = malloc(sizeof(int) * width);
		if (twod[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twod[hgt_index]);

			free(twod);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twod[hgt_index][wid_index] = 0;
	}
	return (twod);
}
