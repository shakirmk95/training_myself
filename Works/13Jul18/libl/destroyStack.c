#include"stack.h"
#include<stdlib.h>

void destroyStack(stack s) {
	int i;
	stacknode *temp;
	temp = s->head;
	stacknode *ptr;
	for(i=0; i<s->top; i++) {
		ptr = temp->node;
		free(temp);
		temp = ptr;
	}
}
