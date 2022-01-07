#include "lists.h"
/**
 * dlistint_len - print acount of nodes in of doubly linked list.
 * @h: const with header of doubly linked list.
 * Return: The acount elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *backwardHead = h;
	size_t count = 0;

	while (backwardHead)
	{
		backwardHead = backwardHead->next;
		count++;
	}
	return (count);
}

/*ALTERNATIVE CODE*/
/*
 * size_t print_dlistint(const dlistint_t *h)
 * {
 *	size_t count;
 *	for (count = 0; h != NULL; count++)
 *	{
 *
 *		h = h->next;
 *	}
 *	return(count);
 * }
 */
