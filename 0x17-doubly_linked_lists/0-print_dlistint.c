#include "lists.h"
/**
 * print_dlistint - print element in list
 * @h:struct list
 * Return:list len
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *backwardHead = h;
	size_t count = 0;

	while (backwardHead)
	{
		printf("%d\n", backwardHead->n);
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
 *		printf("%d\n", h->n);
 *		h = h->next;
 *	}
 *	return(count);
 * }
 */
