#include <stdlib.h>

/**
* alloc_grid - allocates a 2D array of integers.
* @width: the width of the grid.
* @height: the height of the grid.
*
* Return: pointer to the allocated grid or NULL if failed.
*/
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
		}

	return (ptr);
}
