#include "lists.h"
/**
 * add_node_end - adds new node at end of list_t list
 * @head: start of list_t
 * @str: string to store in new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	newNode->len = i;

	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (lastNode->next);
}
