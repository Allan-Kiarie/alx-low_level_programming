#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * @head: start of linked list
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int hdata;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	hdata = current->n;

	temp = current->next;
	free(current);

	*head = temp;

	return (hdata);
}
