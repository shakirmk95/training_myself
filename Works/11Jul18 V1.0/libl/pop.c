#include"stack.h"
#include<stdlib.h>


int pop(stack s) {
	int val;
	stack ptr;
	if(isEmpty(s))
		exit(0);
	else {
		val = (*s).data;
		ptr = s;
		if((*s).node == NULL) {
			s = NULL;
		}else {
			s = (*s).node;
			free(ptr);
		}
		return val;
	}
}
