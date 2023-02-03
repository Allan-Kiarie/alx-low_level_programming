#include "lists.h"

/**
 * int sum_listint - adds all data of listint_t list
 * @head: start of linked list
 * Return: sum of data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
