#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - Iterate over an array and perform a given action
* @array: array
* @size: how many element to print
* @action: pointer to print in regular or hex
* Return: void
* Description: Function iterates over each element of the array and applies
* the specified action using a function pointer
*/

	void array_iterator(int *array, size_t size, void (*action)(int))
	{
	unsigned int i;


	if (array == NULL || action == NULL)
	return;


	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}

