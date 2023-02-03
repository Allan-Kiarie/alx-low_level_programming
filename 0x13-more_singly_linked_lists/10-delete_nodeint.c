#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: start of linked list
 * @index:  index of the node that should be deleted
 * indext starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *nNext;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	nNext = prev->next;

	if (index != 0)
	{
		prev->next = nNext->next;
		free(nNext);
	}
	else
	{
		free(prev);
		*head = nNext;
	}

	return (1);
}
