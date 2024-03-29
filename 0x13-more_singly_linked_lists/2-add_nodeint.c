#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of listint_t
 * @head: start of linked list
 * @n: integer
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;
	*head = newNode;

	return (*head);
}
