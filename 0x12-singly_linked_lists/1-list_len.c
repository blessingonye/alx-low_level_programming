#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t list
 * by blessing for alx project 
 * 
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nums = 0;

	while (h)
	{
		nums++;
		h = h->next;
	}
	return (nums);
}
