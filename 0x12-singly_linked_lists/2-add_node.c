#include "lists.h"

/**
 * add_node - adds new node at beginning of list_t list
 * @head: start of linked list
 * @str: string to store in new node
 * Return: address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t  *newNode;
	size_t i;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	newNode->len = i;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
