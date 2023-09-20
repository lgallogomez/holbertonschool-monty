#include "monty.h"

instruction_t cases[] = {
    {"push", pushfunct},
    {"pall", pallfunct},
	{"pint", pintfunct},
	{"pop", popfunct},
	{"swap", swapfunct},
	{"add", addfunct},
	{"nop", nopfunct},
    {NULL, NULL}
};

instruction_t *get_cases()
{
	return (cases);
}
