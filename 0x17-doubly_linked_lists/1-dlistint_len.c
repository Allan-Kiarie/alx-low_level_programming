#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head of the list
 * Return: elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
