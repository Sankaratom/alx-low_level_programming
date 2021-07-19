#include "holberton.h"
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **_arr = NULL, *arr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	_arr = malloc((sizeof(int *) * height) + (sizeof(int) * height * width));
	arr = (int *)(_arr + height);
	if (_arr != NULL)
		for (; i < height; i++)
		{
			_arr[i] = arr + (i * width);
			for (j = 0; j < width; j++)
				_arr[i][j] = 0;
		}
	else
		return (free(_arr), NULL);
	return (_arr);
}