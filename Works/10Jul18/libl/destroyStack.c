#include"stack.h"
#include<stdlib.h>


int pop(stack *s) {
	int val;
	stacknode *ptr;
	if(isEmpty(s))
		return -999;
	else {
		(*s).top--;
		val = (*((*s).head)).data;
		ptr = (*s).head;
		(*s).head = (*((*s).head)).node;
		free(ptr);
		return val;
	}
}
