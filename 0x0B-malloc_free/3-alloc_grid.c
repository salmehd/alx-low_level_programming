#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns pointer to 2 dimensional array ofinteger
 * @width: width of 2-dimensional array
 * @height: height of 2-dimensional array
 * Return: NULL if fails or width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int leng;
	int hgt, widt;

	if (width <= 0 || height <= 0)
		return (NULL);
	leng = malloc(sizeof(int *) * height);

	if (leng == NULL)
		return (NULL);

	for (hgt = 0 ; hgt < height ; hgt++)
	{
		leng[hgt] = malloc(sizeof(int) * width);

		if (leng[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(leng[hgt]);

			free(leng);
			return (NULL);
		}
	}

	for (hgt = 0 ; hgt < height ; hgt++)
	{
		for (widt = 0 ; widt < width; widt++)
			leng[hgt][widt] = 0;
	}

	return (leng);
}
