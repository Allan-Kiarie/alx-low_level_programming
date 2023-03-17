#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i;

	temp = *h;
	i = 0;
	
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;

		if (*h)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;

		return (newNode);
	}
	
	while (temp)
	{
		temp = temp->next;
		i++;
		
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			if (temp->next)
				temp->next->prev = newNode;
			newNode->prev = temp;
			temp->next = newNode;
			
			return (newNode);
		}
	}
	
	free(newNode);
	return (NULL);
}	
