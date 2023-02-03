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

	current = *head;
	if (idx != 0 && current != NULL)
	{
		for (i = 0; i < idx - 1; i++)
			current = current->next;
	}

	if (idx != 0 && current == NULL)
		return (NULL);
	
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	esle
	{
		newNode->next = current->next;
		current->next = newNode;
	}

	return (newNode);
}
