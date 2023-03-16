#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: index of the node, starting from 0
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	i = 0;
	current = head;

	while(current != head)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
}
