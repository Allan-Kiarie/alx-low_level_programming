#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: start of linked list
 * @index: index of the nth node from 0
 * Return: nth node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	while (head != NULL)
	{
		for (i = 0; i < index;)
		{
			head = head->next;
		}
		i++;
	}
	return (head);
}
