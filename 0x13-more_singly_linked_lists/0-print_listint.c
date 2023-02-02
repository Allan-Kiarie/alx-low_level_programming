#include "lists.h"
/**
 * print_listint - prints all elements of listint_t list
 * @h: a linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		numNodes++;
	}
	return (numNodes);
}