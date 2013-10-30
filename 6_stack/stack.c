#include "stack.h"

TYPE *stack_array = NULL;
int tos = -1;
int cursize = 0;

int init (void)
{
    /* assume that 16 elements are initially required */
    stack_array = (TYPE*) calloc (16, sizeof(TYPE));
    cursize = 16;
    if (NULL == stack_array) {
        fprintf (stderr, "Could not allocate\n");
        return -1;
    } else {
        return 0;
    }
}

int push (TYPE input)
{
    assert (stack_array != NULL);
    if (tos == cursize-1) {
        /* stack is full, resize it */
        TYPE * newptr = realloc (stack_array, 2 * cursize * sizeof(TYPE));
        if (NULL == newptr) {
            /* Reallocation failed */
            return -1;
        } else {
            stack_array = newptr;
            tos++;
            stack_array [tos] = input;
            return 0;
        }
    } else {
        tos++;
        stack_array [tos] = input;
        return 0;
    }
}

TYPE pop (void)
{
    TYPE ret = (TYPE) 0;
    if (tos == -1) {
        /* stack empty */
        return (TYPE)-1;
    } else {
        ret = stack_array [tos];
        tos--;
        return ret;
    }
}

void free_stack (void)
{
    free (stack_array);
    stack_array = NULL;
}

