#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length;

	length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		length++;
	}

	return (length);
}
