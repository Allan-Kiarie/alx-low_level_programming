#include "lists.h"
/**
 * sum_dlistint - sum of all data in list
 * @head: start of list
 * Return: sum or 0
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
