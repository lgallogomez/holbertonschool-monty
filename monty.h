#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_td;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_td **stack, char *content, int line_number);
} instruction_t;

void pushfunct(stack_td **stack, char *content, int line_number);
void pallfunct(stack_td **stack, char *content, int line_number);
stack_td *checkinstruction(char *line, stack_td **stack, int line_number);

instruction_t cases[] = {
    {"push", pushfunct},
    {"pall", pallfunct},
    {NULL, NULL}
};

#endif