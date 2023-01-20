#include "function_pointers"
/**
 * int_index - searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: function pointer
 * Return: index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if ( size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
