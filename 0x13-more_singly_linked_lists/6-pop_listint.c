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

	if (*head == NULL)
		return (0);

	hdata = *head->n;
	temp = *head;

	*head = *head->next;
	free(temp);

	return (hdata);
}
