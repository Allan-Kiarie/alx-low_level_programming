#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: the head of the list
 * Return: sum of all data (n), or zero if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (!head)
		return (0);

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
