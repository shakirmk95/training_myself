#include"stack.h"

void destroyStack(stack s) {
	int i;
	stacknode *ptr;
	for(i=0; i<s->top; i++) {
		ptr = s->head->node;
		free(s->head);
	}
	free(s);
}
