#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *current;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		if (idx == 0)
		{
			*head = newNode;
			return (newNode);
		}
		else
		{
			free(newNode);
			return (NULL);
		}
	}

	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
