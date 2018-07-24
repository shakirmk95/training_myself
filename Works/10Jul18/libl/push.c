#include"stack.h"
#include<stdlib.h>

int push(int x, stack *s) {
	stacknode *new = (stacknode *)malloc(sizeof(stacknode));
	if(isEmpty(s)) {
		((*s).head) = new;
		(*((*s).head)).node = NULL;
		(*((*s).head)).data = x;
	}else {
		(*new).data = x;
		(*new).node = (*s).head;
		(*s).head = new;
	}
	(*s).top++;
	return 0;
}
