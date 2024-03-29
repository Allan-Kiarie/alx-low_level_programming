#include "function_pointers.h"
/**
 * array_iterator -executes a fuction given as a parameter
 * on each element of array
 * @array: input array
 * @size: size of array
 * @action: function pointer
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
