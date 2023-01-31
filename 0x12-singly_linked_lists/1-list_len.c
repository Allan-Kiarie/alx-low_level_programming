#include "lists.h"
/**
 * list_len - displays numberof elements in linked list_t lis
 * @h: linked list
 * Return: an integer
 */
size_t list_len(const list_t *h)
{
	size_t length;

	length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
