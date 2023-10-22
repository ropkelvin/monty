#include "monty.h"

/**
 * _add - adds the top elements
 * @head: head
 * @counter: line_number
 * Return: nothing
*/

void _add(stack_t **head, unsigned int counter)
{
	stack_t *t;
	int l = 0, i;

	t = *head;
	while (t)
	{
		t = t->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	i = t->n + t->next->n;
	t->next->n = i;
	*head = t->next;
	free(t);
}
