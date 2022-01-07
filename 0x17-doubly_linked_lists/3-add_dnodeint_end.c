#include "lists.h"
/**
 * add_dnodeint - Create new node of struct dlistint_t.
 * @head: double pointer
 * @n: number a save in new node.
 * Return: Pointer a new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *last;


	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
    
    newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	newNode->prev = last;

	return (newNode);

}
