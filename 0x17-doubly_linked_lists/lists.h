#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * lists.h by Andrés Medina
 */

/*STRUCTURES*/
typedef struct dlistint_t
{
    int n;
    struct dlistint_t *prev;
    struct dlistint_t *next;
}; dlistint_t;

/*FUNTIONS*/
size_t print_dlistint(const dlistint_t *h);
#endif