#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: start of a listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;
       
	if (*head != NULL)
	{
		current = *head;

		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
	}
}		
