#include "lists.h"
/**
 * free_dlistint - free mallocs
 * @head: const with header of linked list.
 * Return: Without Return.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode, *backwardHead;

	backwardHead = head;
	while (backwardHead)
	{
		backwardHead = backwardHead->next;
		free(backwardHead);
		backwardHead = nextNode;
	}
}
