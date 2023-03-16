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

	i = 0;
	while (head->next != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
