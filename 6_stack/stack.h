#ifndef __STACK_H__
#define __STACK_H__
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int TYPE;
extern TYPE *stack_array;
extern int tos;
extern int cursize;

int init (void);
int push (TYPE d);
TYPE pop (void);
void free_stack(void);
#endif
