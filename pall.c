#include "monty.h"
/**
 * _pall - prints stack
 * @head: head
 * @counter: nothing
 * Return: nothing
*/

void _pall(stack_t **head, unsigned int counter)
{
	stack_t *t;
	(void)counter;

	t = *head;
	if (t == NULL)
		return;
	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
