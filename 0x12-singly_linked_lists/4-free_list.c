#include "lists.h"
/**
 * free_list - fuction that frees list_t list.
 * @head: pointer.
 * Return: VOID.
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
	free(head->str);
	free(head);
	head = ptr;
	}
}
