#include "lists.h"

/**
 * listint_len - Returns number of elements in listint_t list
 * @h: a linked list
 * Return: an integer
 */
size_t listint_len(const listint_t *h)
{
	size_t numNodes;

	while (h != NULL)
	{
		numNodes++;
	}
	return (numNodes);
}
