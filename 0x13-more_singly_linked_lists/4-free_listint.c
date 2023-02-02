#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: start of listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
