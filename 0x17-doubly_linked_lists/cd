#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: where to delete
 * Return: the 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *current, *temp;

	if (head)
	{
		current = *head;
		if (index < 1)
		{
			if (!current)
				return (-1);
			*head = current->next;
			if (*head)
				(*head)->prev = NULL;
			free(current);
			return (1);
		}

		for (; current; current = current->next, index--)
		{
			if (index - 1 == 0)
			{
				temp = current->next;
				if (!temp)
					break;
				current->next = temp->next;
				if (temp->next)
					temp->next->prev = current;
				free(temp);
				return (1);
			}
		}
	}
	return (-1);
}
