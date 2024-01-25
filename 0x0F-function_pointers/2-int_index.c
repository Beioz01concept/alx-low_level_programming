#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array to search.
 * @size: Size of the array.
 * @cmp: Pointer to the function to compare values.
 *
 * Description:
 * This function searches for an integer in the array pointed to by 'array'.
 * It iterates through each element of the array and applies the comparison
 * function 'cmp' to find the first occurrence of the integer.
 *
 * @array: Array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first occurrence of the integer, or -1 if not found
 *         or if 'array' is NULL or if 'cmp' is NULL.
 */

	int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;

		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}

