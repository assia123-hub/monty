#include "monty.h"

stack_t *push(stack_t **head, int number) {
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = number;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    *head = new_node;
    return new_node;
}

void pint(stack_t **head, unsigned int number) {
    if (*head == NULL) {
        fprintf(stderr, "Stack empty\n");
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*head)->n);
}

