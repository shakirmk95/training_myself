#include"stack.h"
#include<stdlib.h>

int pop(stack s) {
	int val;
	stacknode *ptr;
	if(isEmpty(s))
		return -1;
	else {
		(*s).top--;
		val = (*((*s).head)).data;
		ptr = (*s).head;
		
		(*s).head = (*((*s).head)).node;
		if(s->top == 0) {
			s->head = NULL;
		}		
		free(ptr);
		
		
		return val;
	}
}
